/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-30 15:20:35
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-30 17:03:20
 * @FilePath: \c_porject\pointer\pointer.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 指针的使用：1.指针变量 2.指针变量的声明 3.指针变量的初始化 4.指针变量的使用
& 取地址操作符(也叫引用) ：获取变量的地址 ：int* i_pointer = &i; 获取i的地址，i_pointer保存的是i的地址
* 取值操作符（也叫解引用）：获取变量的值 ：int i = *i_pointer;
什么类型的指针对应到什么类型的变量：
float f;
float* f_pointer = &f;                      
 */
int main()
{
    int i=1024;
    char c='a'; 
    int *i_pointer = &i;    //情况一：先给变量赋值，再让指针取地址
    printf("i = %d\n", i);
    char* c_pointer = &c;
    printf("i_pointer = %p\n", i_pointer);//输出指针地址
    printf("i_pointer = %d\n",*i_pointer);//使用指针间接访问
    printf("c_pointer = %p\n", c_pointer);
    printf("c_pointer = %c\n",*c_pointer);

    int p;    //情况二：给指针*p_pointer赋值等价于给变量p赋值
    int *p_pointer = &p;    
    *p_pointer = 666;
    printf("p = %d\n",p);
    
    //定义多个指针变量的声明
    int *i_pointer1,*i_pointer2,*i_pointer3;
    //指针变量的初始化
    i_pointer1 = &i;
    //指针变量的使用
    printf("i_pointer1 = %p\n", i_pointer1);    

    //指针的使用场景：传递和偏移
    //指针的传递
    change(&i);//必须要加&才会改变i的值
    printf("after change i = %d\n",i);
    //指针的偏移
    int i_array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p_array = i_array;//i_array中存的就是整型指针类型，因此不需要加&
    for ( i = 0; i < 10; i++)
    {
        printf("%d",p_array[i]);
    }
    return 0;
}

void change(int *p)
    {
        *p = 123;
    }