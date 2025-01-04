/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-04 11:19:42
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-04 11:21:09
 * @FilePath: \结构体\链表\func.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
int num;
float score;
struct student* pNext;
}stu,*pstu;
//尾插法
void list_tail_insert(pstu*,stu**,int);
//头插法
void list_head_insert(pstu*,pstu*,int);
//有序插入法
void list_sort_insert(pstu*,pstu*,int);
//删除
void list_delete(pstu*,pstu*,int);
//链表修改
void list_modify(pstu,int,float);
//链表打印
void list_print(pstu);
void list_print_score(pstu);