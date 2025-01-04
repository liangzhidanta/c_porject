// func.c
#include "static.h"
// 定义 func 函数
void func(void) {
    static int i = 90;
    if (i > 10) {
        i -= 5;
    } else {
        i += 5;
    }
    printf("i = %d\n",i);
}