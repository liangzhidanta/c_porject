/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-30 09:43:46
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-30 11:07:31
 * @FilePath: \c_porject\gets_puts\str.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//str只能用于字符串，不能用于数字
int main()
{
    
    //strlen的使用
    //统计字符串中字符的个数
    /* size_t len;    //strlen函数返回的是size_t类型，其实是unsigned int类型
    char str[100];
    printf("plesae input a string:");
    while (gets(str) != NULL)
    {
        len = strlen(str);
        printf("the length of the string is %d\n", len);
        puts(str);
        system("pause");
    } */
        

    //strcpy的使用;
    //strncpy可以指定拷贝的长度，用法：strncpy(目标字符串，源字符串，拷贝的长度)
    char strcopy[100];
    strcpy(strcopy, "hello world");  //strcpy函数把strcopy字符串的内容改为hello world
    puts(strcopy);

    //strcomp的使用     
    char a[100];
    char b[100];    
    printf("please input first strings:");
    gets(a);
    printf("please input second strings:");
    gets(b);
    int ret = strcmp(a, b);
    printf("the result of strcmp is %d\n", ret);
    system("pause");

    //strcat的使用
    char c[100] = "hello";
    char d[100] = " world";
    strcat(c, d);
    puts(c);
    system("pause");
    return 0;
    
}

