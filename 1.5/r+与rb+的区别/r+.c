/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-05 20:41:54
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-06 07:29:55
 * @FilePath: \c_porject\1.5\r+与rb+的区别\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{   
//r+  文本模式下，写入\n，存储的是\r\n，读取时，\r\n会变为\n
//rb+ 二进制模式下，写入\n，存储的是\n，读取时，\r\n会变为\n
    FILE *fp;
    fp = fopen("file.txt", "r+");
    if (fp == NULL) {
        perror("fopen");
        return -1;
    }
    int ret = fwrite("hello world",sizeof(char),11,fp);
    printf("ret = %d\n",ret);//fwrite成功，返回值代表写入的字符数
    fseek(fp,0,SEEK_SET);//光标回到文件开头
    char c[100] = {0};
    ret = fread(c,sizeof(char),100,fp);
    printf("ret = %d\n",ret);
    printf("%s\n",c);
    fclose(fp);
    
    return 0;
}
