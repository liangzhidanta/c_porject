/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-03 10:01:16
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-03 10:18:30
 * @FilePath: \1.3\setjmp.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
/*  setjmp与longjmp:可以从任何子函数返回main函数；
    需求场景:编译器编译错误时跳回main函数 */
jmp_buf envbuf;//放了很多整型变量，是寄存器的当前状态
void b()
{
    printf("I am b func\n");
    longjmp(envbuf,5); //回到 setjmp 位置
}
void a()
{
    printf("before b(),I am a func\n");
    b();
    printf("after b(),I am a func\n");
}
void main()
{
    int i;
    i = setjmp(envbuf); //保存进程执行的上下文(寄存器当时的状态)
    if(i==0)
    {
        a();
    }
return;
}