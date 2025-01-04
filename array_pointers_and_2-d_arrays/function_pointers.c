/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-01 09:17:46
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-01 09:54:02
 * @FilePath: \c_porject\array_pointers_and_2-d_arrays\function_pointers.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//函数指针的使用
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
/* 
例中定义了
函数指针 p，它将函数 b 赋给 p。这里为什么可以进行赋值呢？其实是因为函数名本身存储的即
为“函数入口地址”，接着将 p 传递给函数 a，相当于把一个“行为”传递给函数 a，之前我们传递
给函数的都是数据，通过函数指针可以将行为传递给一个函数，这样我们调用函数 a 就可以执行函
数b 的行为，当然也可以执行其他函数的行为。
 */   
void b()//函数名中存储的是函数的入口地址，类型是函数指针
{
    printf("I am func b\n");
}
void a(void (*p)())//a函数的作用：传递什么行为就执行什么行为
{
    p();
}
//定义函数指针，初始化只能赋函数名 
int main()
{
    void (*p)(); //定义一个函数指针变量
    p = b; //函数指针的返回值及入参要与函数保持一致
    a(p);
    return 0;
}