/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-28 17:55:11
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-29 07:04:42
 * @FilePath: \c_porject\float\float.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // float  f = 1234567890;  //float精度为7位，赋值的那一刻精度就丢失了，掌握float比大小
    // printf("%.3f\n", f);

    // char  c = 'a';
    // printf("%c\n", c);  //ASCII码的输出
    // printf("%c\n", 'a' - 32);  //小写转大写
    // char b = 97;
    // printf("%c\n", b);
    
    // printf("\\\n");  //如何输出\ //
    // printf("\\\\");  //输出\\   //

    // char x = 0x93 << 1 >> 1; //移位时按4B大小操作，但是char是1B
    // printf("x=%x\n", x);
    // char y = 0x93 << 1 ;
    // y = y >> 1;              //赋值时发生了截断
    // printf("y=%x\n", y);


   /*  long long a , b;       ///long long是64位
    a = 131072 * 131072;   //32位程序，运算时4B运算，中间结果发生截断
    printf("%lld\n", a);   // 32位程序，8B输出%lld；64位程序%ld
    //解决方案：强制类型转换
    b = (long long)131072 * 131072;
    printf("%lld\n", b);
   */
    
    return 0;   
}