/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-04 14:41:16
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-05 10:28:49
 * @FilePath: \文件的打开与关闭\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "r");//fopen()的用法：fopen(文件名，打开方式)
    if (fp == NULL) {
        perror("fopen");//perror()的用法：perror(错误信息)，记录最近一个函数执行失败的原因
        return -1;
    }
    //循环读取文件
    char c ;
    c = getc(fp);
    while (c != EOF) {
        printf("%c", c);
    }
    return 0;
}
