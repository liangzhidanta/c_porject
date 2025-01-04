/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-31 17:24:53
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-31 18:29:45
 * @FilePath: \c_porject\array_pointers_and_2-d_arrays\array_pointers.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//数组指针
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int (*p)[4])//函数参数为数组指针
{
     for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%3d",*(*(p+i)+j));//与p[i][j]等价
        }
        putchar('\n');
    }
}
int main()
{   
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int b[4] = {1,2,3,4};
    int i = 10;
    int (*p)[4];//定义一个数组指针，括号不能去掉
    p = a;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%3d",p[i][j]);
        }
        putchar('\n');
    }
    print_array(a);//打印数组的函数
    return 0;
}

