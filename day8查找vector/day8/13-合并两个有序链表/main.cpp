#include "mylist.h"


//6-合并两个有序链表
//7-逆置
//13-将一个链表拆分两条链表
int main()
{
	pstu phead = NULL, ptail = NULL;//链表头指针，尾指针
	pstu phead1 = NULL, ptail1 = NULL;
	int num;
	while (scanf("%d", &num) != EOF)
	{
		list_sort_insert(phead, ptail, num);
	}
	list_print(phead);
	// 下面是合并两个有序链表测试代码
	//while (scanf("%d", &num) != EOF)
	//{
	//	list_sort_insert(phead1, ptail1, num);
	//}
	//list_print(phead1);
	////合并两个有序链表
	//merge(phead, ptail, phead1);
	//phead1 = NULL, ptail1 = NULL;
	//list_print(phead);
	//下面是逆置测试
	//reverse(phead, ptail);
	split(phead, ptail, phead1, ptail1);
	list_print(phead);
	list_print(phead1);
	return 0;
}