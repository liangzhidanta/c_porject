#include "func.h"
int main()
{
    pstu p;
    pstu phead=NULL,ptail=NULL; //代表链表
    int i;
    float f;
    while(scanf("%d",&i)!=EOF) //链表的头插、尾插、有序插入
    {
        list_tail_insert(&phead,&ptail,i);
        //list_head_insert(&phead,&ptail,i);
        //list_sort_insert(&phead,&ptail,i);
    }
    list_print(phead);
    //while(printf("please input delete num:"),scanf("%d",&i)!=EOF) //链表删除
    //{
    // list_delete(&phead,&ptail,i);
    // list_print(phead);
    //}
    //while(printf("please input modify num:"),scanf("%d%f",&i,&f)!=EOF) //链表修改
    //{
    // list_modify(phead,i,f);
    // list_print_score(phead);
    //}
    system("pause");
}
