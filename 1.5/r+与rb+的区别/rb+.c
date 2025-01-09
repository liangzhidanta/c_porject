#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;//文件指针
    int i = 10, arr[5] = { 1,2,3,4,5 } , ret;
    fp = fopen("file_1.txt", "rb+");
    if (fp == NULL) {
        perror("fopen");
        return -1;
    }
//写入整型数
    ret = fwrite(&i,sizeof(int),1,fp);
    printf("ret = %d\n",ret);
    i = 0;
    fseek(fp,0,SEEK_SET);//光标回到文件开头
    fread(&i,sizeof(int),1,fp);
    printf("i = %d\n",i);
//写入整型数组
    fseek(fp, sizeof(int), SEEK_SET); // 将文件指针移动到整型数之后
    ret = fwrite(arr,sizeof(int),5,fp);
    printf("ret = %d\n",ret);
    memset(arr,0,sizeof(arr));//清空数组
    fseek(fp, sizeof(int), SEEK_SET);
    fread(arr,sizeof(int),5,fp);
    printf("arr = %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
    fclose(fp);
    return 0;
}

