/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-03 15:17:32
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-03 18:05:08
 * @FilePath: \1.3\结构体\Linklist.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// 不带头结点的链表
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};//结构体类型声明，注意最后一定要加分号
struct student student1, student2;
int main()
{
    struct student s={1001,"lele",'M',20,85.4,"Shenzhen"}; //定义及初始化
    struct student sarr[3];
    int i;
    printf("%d %s %c %d %f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);
    for(i=0;i<3;i++)
    {
        scanf("%d%s %c%d%f%s",&sarr[i].num,sarr[i].name,&sarr[i].sex,&sarr[i].age, &sarr[i].score,sarr[i].addr);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %c %d %f %s\n",sarr[i].num,sarr[i].name,sarr[i].sex, sarr[i].age,sarr[i].score,sarr[i].addr);
    }
    system("pause");
    return 0;
}