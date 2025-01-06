/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-06 07:56:58
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-06 07:59:31
 * @FilePath: \c_porject\1.5\fputs与fgets\fputs.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char** argv)
{
    char buf[20]={0};
    FILE* fp;
    int i=1234;
    int ret;
    char *p;
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
    while(fgets(buf,sizeof(buf),fp)!=NULL) //读取到文件结束时，fgets 返回 NULL
    {
        printf("%s",buf);
    }
    return 0;
}