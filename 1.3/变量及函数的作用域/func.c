#include "func.h" 

extern int k; //借用 main.c 文件中的全局变量 k
//static 修饰函数，函数只能在本函数、本文件内使用
void print()
{
    static int t=0; //只初始化一次
    t++;
    printf("print execute %d\n",t);
    printf("print k=%d\n",k);//借用的全局变量k
    // 默认全局变量只在当前文件中有效，func中不能使用main中的全局变量k
    // (前提注释掉extern int k;)
}
