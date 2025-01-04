/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-31 09:35:07
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-01 19:08:21
 * @FilePath: \c_porject\pointer\stack&heap.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//栈空间与堆空间的差异
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 函数声明
char *print_steak();
char *print_mallow();
int main()
{
    char *p;
    p = print_steak();//数据放在栈空间
    puts(p);//这个函数执行完，p就释放了，因此会报错
    p = print_mallow();//数据放在堆空间
    puts(p);
    free(p);
    p = NULL;
    return 0;
}

char *print_steak()//函数栈空间释放后，函数内所有局部变量消失
{
    char str[] = "I am in stack";
    puts(str);//这个puts函数正确输出了I am in stack
    return str;
}
char *print_mallow()
{
    char str[] = "I am in heap";
    char *p = (char *)malloc(strlen(str) + 1);
    strcpy(p, str);
    puts(p);
    return p;
    
}