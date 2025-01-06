#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

typedef struct student_t {
	int num;  //Ϊ�����뷽�㣬���ǽ�Ϊѧ�����ѧ����Ϣ
	struct student_t* pNext;
}Student_t, * pStudent_t;

void list_print(pStudent_t phead)
{
	while (phead)
	{
		printf("%3d", phead->num);//��ӡ��Ӧ�ڵ�ֵ
		phead = phead->pNext;
	}
	putchar('\n');
}


int comparePointer(const void* pleft, const void* pright)
{
	//Ҫ��ǿ��ת��Ϊ����ָ��
	pStudent_t* p1 = (pStudent_t*)pleft;
	pStudent_t* p2 = (pStudent_t*)pright;
	return (*p1)->num - (*p2)->num;
}
#define N 10
int main()
{
	int i, listLen = 0;  //listLen���ڼ�¼������Ԫ�صĸ���
	pStudent_t phead, ptail, pNew, pCur;
	//pStudent_t pArr[N];//�ṹ��ָ������
	pStudent_t* pArr;
	phead = ptail = NULL;
	//ͨ��ͷ�巨�½�����
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
	pArr = (pStudent_t*)calloc(listLen, sizeof(pStudent_t));//��̬�Ľṹ��ָ������
	//���������������ÿ�����ĵ�ַ����ָ������pArr
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
