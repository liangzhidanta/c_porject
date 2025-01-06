#include "mylist.h"



//�����ӡ
void list_print(pstu phead)
{
	while (phead)
	{
		printf("%3d", phead->num);//��ӡ��Ӧ�ڵ�ֵ
		phead = phead->next;
	}
	putchar('\n');
}



//������뷨
void list_sort_insert(pstu& phead, pstu& ptail, int num)
{
	pstu pnew = (pstu)calloc(1, sizeof(stu));//����������ˣ���������ܿռ�
	pnew->num = num;
	pstu pcur = phead;
	pstu ppre = phead;
	if (NULL == phead) //����Ϊ��
	{
		phead = pnew;
		ptail = pnew;
	}
	else if (num < phead->num)//С��ͷ����ͷ�巨
	{
		pnew->next = phead;
		phead = pnew;
	}
	else {//���뵽����
		while (pcur)
		{
			if (pcur->num > num) //�������㣬�����½��
			{
				ppre->next = pnew;
				pnew->next = pcur;
				break;
			}
			ppre = pcur;//С�ܼ�¼���λ��
			pcur = pcur->next;//���������
		}
		//���pcurΪNULL������û�в��뵽�м䣬����Ҫ����β��
		if (NULL == pcur)
		{
			ptail->next = pnew;//ԭ��β����nextָ���½��
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
		if (NULL == phead) //����Ϊ��
		{
			phead = pnew;
			ptail = pnew;
		}
		else if (pnew->num < phead->num)//С��ͷ����ͷ�巨
		{
			pnew->next = phead;
			phead = pnew;
		}
		else {//���뵽����
			while (pcur)
			{
				if (pcur->num > pnew->num) //�������㣬�����½��
				{
					ppre->next = pnew;
					pnew->next = pcur;
					break;
				}
				ppre = pcur;//С�ܼ�¼���λ��
				pcur = pcur->next;//���������
			}
			//���pcurΪNULL������û�в��뵽�м䣬����Ҫ����β��
			if (NULL == pcur)
			{
				ptail->next = pnew;//ԭ��β����nextָ���½��
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
		return;//�����
	}
	if (s)
	{
		t = s->next;
	}
	else {
		return;//1�����
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
			//β�巨
			if (NULL == phead1)
			{
				phead1 = pcur;
				ptail1 = pcur;
			}
			else {
				ptail1->next = pcur;
				ptail1 = pcur;
			}
			//phead����Ҫ�Ƴ�pcur
			ppre->next = pcur->next;
		}
		ppre = pcur;
		pcur = pcur->next;
	}
	ptail1->next = NULL;
}