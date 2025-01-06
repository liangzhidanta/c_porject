#include "mylist.h"



//链表打印
void list_print(pstu phead)
{
	while (phead)
	{
		printf("%3d", phead->num);//打印对应节点值
		phead = phead->next;
	}
	putchar('\n');
}



//有序插入法
void list_sort_insert(pstu& phead, pstu& ptail, int num)
{
	pstu pnew = (pstu)calloc(1, sizeof(stu));//两个参数想乘，是申请的总空间
	pnew->num = num;
	pstu pcur = phead;
	pstu ppre = phead;
	if (NULL == phead) //链表为空
	{
		phead = pnew;
		ptail = pnew;
	}
	else if (num < phead->num)//小于头部，头插法
	{
		pnew->next = phead;
		phead = pnew;
	}
	else {//插入到后面
		while (pcur)
		{
			if (pcur->num > num) //条件满足，放入新结点
			{
				ppre->next = pnew;
				pnew->next = pcur;
				break;
			}
			ppre = pcur;//小弟记录大哥位置
			pcur = pcur->next;//大哥往后走
		}
		//如果pcur为NULL，代表没有插入到中间，就需要插入尾部
		if (NULL == pcur)
		{
			ptail->next = pnew;//原有尾部的next指向新结点
			ptail = pnew;
		}
	}
}


void merge(pstu& phead, pstu& ptail, pstu phead1)
{
	while (phead1 != NULL)
	{
		pstu pnew = phead1;
		phead1 = phead1->next;
		pstu pcur = phead;
		pstu ppre = phead;
		if (NULL == phead) //链表为空
		{
			phead = pnew;
			ptail = pnew;
		}
		else if (pnew->num < phead->num)//小于头部，头插法
		{
			pnew->next = phead;
			phead = pnew;
		}
		else {//插入到后面
			while (pcur)
			{
				if (pcur->num > pnew->num) //条件满足，放入新结点
				{
					ppre->next = pnew;
					pnew->next = pcur;
					break;
				}
				ppre = pcur;//小弟记录大哥位置
				pcur = pcur->next;//大哥往后走
			}
			//如果pcur为NULL，代表没有插入到中间，就需要插入尾部
			if (NULL == pcur)
			{
				ptail->next = pnew;//原有尾部的next指向新结点
				ptail = pnew;
			}
		}
	}
}


void reverse(pstu& phead, pstu& ptail)
{
	pstu r, s, t;
	ptail = phead;
	r = phead;
	if (r)
	{
		s = r->next;
	}
	else {
		return;//链表空
	}
	if (s)
	{
		t = s->next;
	}
	else {
		return;//1个结点
	}
	while (t)
	{
		s->next = r;
		r = s;
		s = t;
		t = t->next;
	}
	s->next = r;
	phead = s;
	ptail->next = NULL;
}


void split(pstu phead, pstu& ptail, pstu& phead1, pstu& ptail1)
{
	int i;
	pstu ppre, pcur;
	ppre = pcur = phead;
	for(i=1; pcur !=NULL;i++)
	{
		if (i % 2)
		{

		}
		else {
			//尾插法
			if (NULL == phead1)
			{
				phead1 = pcur;
				ptail1 = pcur;
			}
			else {
				ptail1->next = pcur;
				ptail1 = pcur;
			}
			//phead链表要移出pcur
			ppre->next = pcur->next;
		}
		ppre = pcur;
		pcur = pcur->next;
	}
	ptail1->next = NULL;
}