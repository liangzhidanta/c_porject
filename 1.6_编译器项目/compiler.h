/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-06 09:56:15
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-06 20:42:03
 * @FilePath: \c_porject\1.6_编译器项目\compiler.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//编译器项目
//词法分析

#include <stdio.h>
#include <iostream>
#include <string>
#include <Windows.h>
#ifndef COMPILER_H
#define COMPILER_H  

#endif
//为使得项目不过于复杂，未考虑逻辑与、逻辑或、逻辑非等逻辑运算符，自增和自减
//运算符也不考虑，但原理完全一致。

enum e_TokenCode//枚举，运算符的token都是<=24；
{
/* 运算符及分隔符 */
    TK_PLUS, // + 加号
    TK_MINUS, // - 减号
    TK_STAR, // * 星号
    TK_DIVIDE, // / 除号
    TK_MOD, // % 求余运算符
    TK_EQ, // == 等于号
    TK_NEQ, // != 不等于号
    TK_LT, // < 小于号
    TK_LEQ, // <= 小于等于号
    TK_GT, // > 大于号
    TK_GEQ, // >= 大于等于号
    TK_ASSIGN, // = 赋值运算符
    TK_POINTSTO, // -> 指向结构体成员运算符
    TK_DOT, // . 结构体成员运算符
    TK_AND, // & 地址与运算符
    TK_OPENPA, // ( 左圆括号
    TK_CLOSEPA, // ) 右圆括号
    TK_OPENBR, // [ 左方括号
    TK_CLOSEBR, // ] 右方括号
    TK_BEGIN, // { 左花括号
    TK_END, // } 右花括号
    TK_SEMICOLON, // ; 分号
    TK_COMMA, // , 逗号
    TK_ELLIPSIS, // ... 省略号
    TK_EOF, // 文件结束符
    /* 常量 */
    TK_CINT, // 整型常量，浮点型赋值同一个 Token
    TK_CCHAR, // 字符常量
    TK_CSTR, // 字符串常量
    /* 关键字 */
    KW_CHAR, // char 关键字
    KW_SHORT, // short 关键字
    KW_INT, // int 关键字
    KW_VOID, // void 关键字
    KW_STRUCT, // struct 关键字
    KW_IF, // if 关键字
    KW_ELSE, // else 关键字
    KW_FOR, // for 关键字
    KW_CONTINUE, // continue 关键字
    KW_BREAK, // break 关键字
    KW_RETURN, // return 关键字
    KW_SIZEOF, // sizeof 关键字
    KW_ALIGN, // __align 关键字
    KW_CDECL, // __cdecl 关键字 standard c call
    KW_STDCALL, // __stdcall 关键字 pascal c call
    /* 标识符 */
    TK_IDENT //函数名，变量名
};

/* 单词存储结构定义 */
typedef struct TkWord
{
    int tkcode; // Token code, which is the TOKEN value
    char spelling[50]; // 单词字符串
    struct TkWord *next; // 指向哈希冲突的其他单词
} TkWord;
TkWord* tk_hashtable[MAXKEY]; // 单词哈希表


static TkWord keywords[] = {
    {TK_PLUS,NULL,"+"},
    {TK_MINUS,NULL,"-"},
    {TK_STAR,NULL,"*"},
    {TK_DIVIDE,NULL,"/"},
    {TK_MOD,NULL,"%"},
    {TK_EQ,NULL,"=="},
    {TK_NEQ,NULL,"!="},
    {TK_LT,NULL,"<"},
    {TK_LEQ,NULL,"<="},
    {TK_GT,NULL,">"},
    {TK_GEQ,NULL,">="},
    {TK_ASSIGN,NULL,"="},
    {TK_POINTSTO,NULL,"->"},
    {TK_DOT,NULL,"."},
    {TK_AND,NULL,"&"},
    {TK_OPENPA,NULL,"("},
    {TK_CLOSEPA,NULL,")"},
    {TK_OPENBR,NULL,"["},
    {TK_CLOSEBR,NULL,"]"},
    {TK_BEGIN,NULL,"{"},
    {TK_END,NULL,"}"},
    {TK_SEMICOLON,NULL,";"},
    {TK_COMMA,NULL,","},
    {TK_ELLIPSIS,NULL,"..."},
    {TK_EOF,NULL,"End_Of_File"},
    {TK_CINT,NULL,"整型常量"},
    {TK_CCHAR,NULL,"字符常量"},
    {TK_CSTR,NULL,"字符串常量"},
    {KW_CHAR,NULL,"char"},
    {KW_SHORT,NULL,"short"},
    {KW_INT,NULL,"int"},
    {KW_VOID,NULL,"void"},
    {KW_STRUCT,NULL,"struct"},
    {KW_IF,NULL,"if"},
    {KW_ELSE,NULL,"else"},
    {KW_FOR,NULL,"for"},
    {KW_CONTINUE,NULL,"continue"},
    {KW_BREAK,NULL,"break"},
    {KW_RETURN,NULL,"return"},
    {KW_SIZEOF,NULL,"sizeof"},
    {KW_ALIGN,NULL,"__align"},
    {KW_CDECL,NULL,"__cdecl"},
    {KW_STDCALL,NULL,"__stdcall"},
    {0}
};
//
//哈希计算函数
int elf_hash(char *key)
{
    int h = 0, g;
    while (*key)
    {
        h = (h << 4) + *key++;
        g = h & 0xf0000000;
        if (g)
        h ^= g >> 24;
        h &= ~g;
    }
    return h % MAXKEY;
}