/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-01 17:37:03
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-02 07:39:42
 * @FilePath: \c_porject\function\global_variables.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
/* 如果局部变量与全局变量重名，那么将采取就近原则，即实际获取和修改的
值是局部变量的值。 */
int i=10; //全局变量
void print(int a)
{   /* 形参相当于局部变量，因此不能再定义
    局部变量与形参同名，否则会造成编译不通 */
    //int a;  //编译不通
    printf("print i=%d\n",i);
}
int main()
{
    int i =20;//局部变量 
    printf("main i=%d\n",i);
    i=5;
    print(i);//print i=10
    printf("main i=%d\n",i);
    return 0;
   
}