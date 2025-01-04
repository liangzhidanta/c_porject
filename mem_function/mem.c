/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-30 11:11:01
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-30 15:19:15
 * @FilePath: \c_porject\mem_function\mem.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //memset函数的使用:使某一个数组的值全部设置为0
    //memset(目标数组,0,sizeof(目标数组))
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",a[i]);
    }
    memset(a,0,sizeof(a));  //每一个字节都被设置为0
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",a[i]);
    }


    //memcopy函数的使用:将一个数组的值拷贝到另一个数组中
    //memcopy(目标数组,源数组,sizeof(源数组))
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    int c[10] = {0};
    memcpy(c,b,sizeof(b)-16);
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}
