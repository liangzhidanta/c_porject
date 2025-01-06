#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
	int num;
	float score;
	struct student* next;
}stu,*pstu;


//头插法
void list_head_insert(pstu&, pstu&, int);
//链表打印
void list_print(pstu);
//尾插法
void list_tail_insert(pstu&, pstu&, int);

//有序插入法
void list_sort_insert(pstu&, pstu&, int);
//链表的删除
int list_delete(pstu&, pstu&, int);

//链表修改
void list_modify(pstu, int, float);

void list_print_score(pstu phead);

void merge(pstu& phead, pstu& ptail, pstu phead1);

void reverse(pstu& phead, pstu& ptail);

void split(pstu phead, pstu& ptail, pstu& phead1, pstu& ptail1);