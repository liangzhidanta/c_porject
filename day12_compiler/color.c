/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-31 20:33:43
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-31 22:13:39
 * @FilePath: \c_porject\day12_compiler\color.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Windows.h>
#include <stdio.h>
#include "compiler.h"
typrdef struct {
    char *name;
    tokencode token;
};
void printColor(char *ch, tokencode token) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if (token >= TK_IDENT)//因为枚举时将相同运算符放在一起
        SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
    //函数显示灰色
    else if (token >= KW_CHAR)
        SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);
    //关键字显示为绿色
    else if (token >= TK_CINT)
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN);
    //常量显示为褐色
    else
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    //运算符显示为红色
    if (-1 == ch[0]) {
        printf("\n End_Of_File!");
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    }
    else {
        printf("%s", ch);
    }
}//根据 TOKEN 值获取对应字符串类型，然后打印