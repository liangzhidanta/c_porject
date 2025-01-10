#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

typedef struct student_t {
	int num;  //为了输入方便，我们仅为学生添加学号信息
	struct student_t* pNext;
}Student_t, * pStudent_t;

void list_print(pStudent_t phead)
{
	while (phead)
	{
		printf("%3d", phead->num);//打印对应节点值
		phead = phead->pNext;
	}
	putchar('\n');
}


int comparePointer(const void* pleft, const void* pright)
{
	//要先强制转换为二级指针
	pStudent_t* p1 = (pStudent_t*)pleft;
	pStudent_t* p2 = (pStudent_t*)pright;
	return (*p1)->num - (*p2)->num;
}
#define N 10
int main()
{
	int i, listLen = 0;  //listLen用于记录链表中元素的个数
	pStudent_t phead, ptail, pNew, pCur;
	//pStudent_t pArr[N];//结构体指针数组
	pStudent_t* pArr;
	phead = ptail = NULL;
	//通过头插法新建链表
	while (scanf("%d", &i) != EOF)
	{
		pNew = (pStudent_t)calloc(1, sizeof(Student_t));
		pNew->num = i;
		if (NULL == phead)
		{
			phead = pNew;
			ptail = pNew;
		}
		else {
			pNew->pNext = phead;
			phead = pNew;
		}
		listLen++;
	}
	list_print(phead);
	pCur = phead;
	pArr = (pStudent_t*)calloc(listLen, sizeof(pStudent_t));//动态的结构体指针数组
	//遍历链表，将链表的每个结点的地址存入指针数组pArr
	for (i = 0; i < listLen; i++)
	{
		pArr[i] = pCur;
		pCur = pCur->pNext;
	}
	puts("----------------------------");
	qsort(pArr, listLen, sizeof(pStudent_t), comparePointer);
	for (i = 0; i < listLen; i++)
	{
		printf("%3d", pArr[i]->num);
	}
	putchar('\n');
	puts("----------------------------");
	list_print(phead);
	return 0;
}
