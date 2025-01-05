/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-04 14:41:16
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-05 15:25:56
 * @FilePath: \文件的打开与关闭\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* FILE *fopen(const char *fname, const char *mode);
常用的 mode 参数及其各自的意义如下所示。 mode（方式） 意义
"r"    打开一个用于读取的文本文件                           *****
"w"    创建一个用于写入的文本文件，文件存在会清空文件       *****
"a"    附加到一个文本文件  写在文件尾部
"rb"   打开一个用于读取的二进制文件
"wb"   创建一个用于写入的二进制文件
"ab"   附加到一个二进制文件
"r+"   打开一个用于读/写的文本文件                          *****
"w+"   创建一个用于读/写的文本文件，文件存在会清空文件
"a+"   打开一个用于读/写的文本文件  写在文件尾部，相对
       a多了读功能                                          *****
"rb+"  打开一个用于读/写的二进制文件
"wb+"  创建一个用于读/写的二进制文件
"ab+"  打开一个用于读/写的二进制文件 */
int main() {
    FILE *fp;
    fp = fopen("file.txt", "r+");//fopen()的用法：fopen(文件名，打开方式)
    if (fp == NULL) {
        perror("fopen");//perror()的用法：perror(错误信息)，记录最近一个函数执行失败的原因
        return -1;
    }
    
    char c ;
    int i;
    // while ((c = fgetc(fp)) != EOF) {//循环读取文件
    //     putchar(c);
    // }

//  写文件
    i = fputc('s', fp);//写入H覆盖了s
    if (EOF == i)
    {
        perror("fputc");
    }
    fclose(fp);
    
//  a+在文件尾部追加
    fp = fopen("file.txt", "a+");
    if (fp == NULL) {
        perror("fopen");
        return -1;
    }
    int j = fputs("WSH", fp);
    if (EOF == j)
    {
        perror("fputs");
    }
    fclose(fp);

//  w 创建一个用于写入的文本文件，文件存在会清空文件
    FILE* fp1 = fopen("file.txt", "w");//w会清空文件
    if (fp1 == NULL) {
        perror("fopen");
        return -1;
    }
    char b;
    int k;
    // 
    k = fputc('w', fp1);
    if (EOF == k)
    {
        perror("fputc");
    }
    fclose(fp1);
    return 0;
}
