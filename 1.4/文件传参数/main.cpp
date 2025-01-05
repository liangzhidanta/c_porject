/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-05 15:31:37
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-05 15:59:16
 * @FilePath: \c_porject\1.4\文件传参数\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//argc 可执行程序运行时的参数个数
//argv[] 中每个成员指向对应的参数
int main(int argc, char *argv[]){//业界都这么写
    int i ;

    FILE *fp;
    fp = fopen(argv[1], "r+");   //fopen()中文件名传入argv[1]
    if (fp == NULL) {
        perror("fopen");            //perror()的用法：perror(错误信息)，记录最近一个函数执行失败的原因
        return -1;
    }
    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    printf("\n");
    for(i = 0; i < argc; i++){
        puts(argv[i]);//打印argv所指文件
    }
    fclose(fp);
    return 0;

}/*
D:\c_porject\1.4\文件传参数>main.exe file.txt
输出：
fuck you!
I get you!
main.exe
file.txt

D:\c_porject\1.4\文件传参数>main.exe file_1.txt 
输出：
You get me?
main.exe
file_1.txt

*/