/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-30 21:17:56
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-01 19:07:33
 * @FilePath: \c_porject\pointer\pointer_1.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
指针与自增自减
指针与一维数组
指针与动态内存申请
字符指针与字符数组初始化
const常量 
数组指针与二维数组
二级指针
*/
int main()
{
    void change(char *p);
    void strcopy(char *dest, const char *src);
    //指针与一维数组
    char p[20] = "hello world";
    change(p);
    puts(p);

    //指针与动态内存申请
    int i = 50; //申请内存
    char *p1 = (char *)malloc(i);//以字节为单位分配内存；malloc返回一个void类型的指针，需要强转为char类型
    strcpy(p1, "hello world");//使用strcopy函数拷贝字符串
    puts(p1);
    free(p1);//free时必须使用malloc最初返回的指针，不能进行任何偏移
    p1 = NULL;//避免野指针
    printf("free successs\n");

    //野指针的例子
    int *a = (int *)malloc(sizeof(int));
    *a = 1;
    int *b = (int *)malloc(sizeof(int));
    *b = 2;
    free(a);//释放a的空间，但是未将a指针赋值为NULL
    int *c = (int *)malloc(sizeof(int));
    *c = 3;
    printf("c = %d\n",*c);
    *a = 123;
    printf("c = %d\n",*c);
    return 0;   

}


void change(char *p) //数组在传递给函数时，传递的是数组首元素的地址（弱化为指针）
{
    p[0] = 'H';
    p[4] = 'W'; 
    p[6] = 'L'; 
}
