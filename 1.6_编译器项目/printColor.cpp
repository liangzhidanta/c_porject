#include "printColor.h"

void printColor(char *ch, e_TokenCode token) {
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
