#include "mylist.h"


//6-�ϲ�������������
//7-����
//13-��һ����������������
int main()
{
	pstu phead = NULL, ptail = NULL;//����ͷָ�룬βָ��
	pstu phead1 = NULL, ptail1 = NULL;
	int num;
	while (scanf("%d", &num) != EOF)
	{
		list_sort_insert(phead, ptail, num);
	}
	list_print(phead);
	// �����Ǻϲ���������������Դ���
	//while (scanf("%d", &num) != EOF)
	//{
	//	list_sort_insert(phead1, ptail1, num);
	//}
	//list_print(phead1);
	////�ϲ�������������
	//merge(phead, ptail, phead1);
	//phead1 = NULL, ptail1 = NULL;
	//list_print(phead);
	//���������ò���
	//reverse(phead, ptail);
	split(phead, ptail, phead1, ptail1);
	list_print(phead);
	list_print(phead1);
	return 0;
}