/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-29 07:28:05
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-29 08:00:54
 * @FilePath: \c_porject\homework01\99chengfabiao&lingxing.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //打印99乘法表
    /* for(int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            int k = i * j;
            printf("%d\t", k);
        }
        printf("\n");
    } */

    //打印菱形
    int n;
    printf("please input n:");
    scanf("%d", &n);
    //打印上三角
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            printf("*");
        }
        printf("\n");
    }
    //打印下三角
    for (int i = n - 1; i >= 1; --i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            printf("*");
        }
        printf("\n");
    }

    system("pause");






    return 0;
}