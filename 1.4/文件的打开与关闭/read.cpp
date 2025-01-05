/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-05 11:06:40
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-05 11:10:26
 * @FilePath: \文件的打开与关闭\read.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char** argv)
{
    char buf[20]="hello\nworld";
    FILE* fp;
    int i=12345;
    int ret;
    if(argc!=2)
    {
        printf("error args\n");
        return -1;
        system("pause");

    }
    fp=fopen(argv[1],"r+");
    if(NULL==fp)
    {
        perror("fopen");
        return -1;
    }
    //向文件中写入整型数
    //ret=fwrite(&i,sizeof(int),1,fp);
    //i=0;
    //ret=fread(&i,sizeof(int),1,fp);
    ret=fwrite(buf,sizeof(char),strlen(buf),fp); //把 buf 中的字符串写入文件
    memset(buf,0,sizeof(buf)); //清空 buf
    ret=fseek(fp,-12,SEEK_CUR); //往前偏移 12 字节
    ret=fread(buf,sizeof(char),sizeof(buf)-1,fp);
    puts(buf);//打印 buf 的内容
    fclose(fp);
    return 0;
}