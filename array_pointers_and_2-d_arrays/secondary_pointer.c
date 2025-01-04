/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-01 06:49:38
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-01 07:15:15
 * @FilePath: \c_porject\array_pointers_and_2-d_arrays\secondary_pointer.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//二级指针
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{   //二级指针是指向指针的指针，其声明方式是在变量名前使用两个星号**。
    int a = 10, b = 5;
    int *p_a = &a; // p 是指向 int 类型的一级指针
    int *p_b = &b;
    int **q = &p_a; // q 是指向 int* 类型的二级指针
    //初始化：可以在定义时直接初始化，也可以先定义后赋值。
    int **r;
    r = &p_a;     
    printf("**q = %d\n",**q);
    printf("a = %3d,b = %3d,*p_a = %3d,*p_b = %3d\n",a,b,*p_a,*p_b);
    change_0(p_a,p_b);//因为函数是值传递，因此并不会改变p_a的指向
    printf("after change_0\na = %3d,b = %3d,*p_a = %3d,*p_b = %3d\n",a,b,*p_a,*p_b);
    change_1(&p_a,p_b);//二级指针的传递：在形参的位置使用二级指针
    printf("after change_1\na = %3d,b = %3d,*p_a = %3d,*p_b = %3d\n",a,b,*p_a,*p_b);
    return 0;
}

void change_0(int *p_a,int *p_b) {
    p_a = p_b;//希望p_a指向b,但是实际并不改变 
}
void change_1(int **p_a,int *p_b) {
    *p_a = p_b;//使用二级指针改变一级指针中的指向
}

