/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-05 16:00:33
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-05 16:20:13
 * @FilePath: \c_porject\1.4\fread与fwrite\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "r+");//fopen()的用法：fopen(文件名，打开方式)
    if (fp == NULL) {
        perror("fopen");//perror()的用法：perror(错误信息)，记录最近一个函数执行失败的原因
        return -1;
    }
    char c[100] = {0};
    int ret;//存返回值
//fread一次性读文件
    ret = fread(c, sizeof(char), 100, fp);//fread()的用法：fread(读取的数据，读取的数据大小，读取的数据个数，文件指针)
    printf("c = %s,ret = %d\n", c,ret);
//fwrite一次性写文件
char d[100] = "\nhello world";// \n换行
    ret = fwrite(d, sizeof(char), strlen(d), fp);
    printf("d = %s,ret = %d\n", d,ret);
    fclose(fp);
    return 0;
}
//由于先读后写时光标已经移动到字符串尾部，因此写入在字符串后而不是覆盖原字符串