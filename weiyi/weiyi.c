/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-29 18:36:12
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-30 21:16:45
 * @FilePath: \c_porject\weiyi.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("a = ");
    scanf("%d",&a);
    a = a<<1;
    printf("%d\n",a);
    int b ;
    printf("b = ");
    scanf("%d",&b);
    b = b>>1;
    printf("%d\n",b);   
    system("pause");
    return 0;
}
