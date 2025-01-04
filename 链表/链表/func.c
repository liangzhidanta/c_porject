#include "func.h" 
void list_tail_insert(pstu* pphead,stu** pptail,int i)
{
    pstu pnew;
    pnew=(pstu)malloc(sizeof(stu));
    memset(pnew,0,sizeof(stu));
    pnew->num=i;
    if(NULL==*pptail) //判断链表是否为空，为空时，pnew 既为头又为尾
    { 
        *pphead=pnew; 
        *pptail=pnew;
    }else{
        (*pptail)->pNext=pnew; //将新结点的地址赋值为尾结点的 pnext 
        *pptail=pnew; //新结点变为链表尾部
    }
}
//只打印学号
void list_print(pstu phead)
{
    while(phead!=NULL)
    {
        printf("%3d ",phead->num);
        phead=phead->pNext;
    }
    printf("\n");
}
//打印学号和分数
void list_print_score(pstu phead)
{
    while(phead!=NULL)
    {
        printf("%3d %5.2f ",phead->num,phead->score);
        phead=phead->pNext;
    }
    printf("\n");
}
void list_head_insert(pstu* pphead,pstu* pptail,int i)
{
    pstu pnew;
    pnew=(pstu)malloc(sizeof(stu));
    memset(pnew,0,sizeof(stu));
    pnew->num=i;
    if(NULL==*pphead) //如果链表为空，pnew 赋给 phead,ptail
    { 
        *pphead=pnew; 
        *pptail=pnew;
    }else{
        pnew->pNext=*pphead; //原有链表的头指针赋给新结点的 pNext 
        *pphead=pnew; //新结点变为链表头
    }
}
void list_sort_insert(pstu* pphead,pstu* pptail,int i)
{
    pstu pcur;
    pstu ppre;
    pstu pnew;
    pnew=(pstu)malloc(sizeof(stu));
    memset(pnew,0,sizeof(stu));
    pnew->num=i;
    pcur=*pphead; //让两个指针都指向链表头
    ppre=*pphead;
    if(NULL==pcur) //判断链表是否为空
    { 
        *pphead=pnew; 
        *pptail=pnew;
    }else if(i<pcur->num) //判断 i 是否小于头部数据，若是则将其插入头部
    {
        pnew->pNext=pcur; //原有链表的头指针赋给新结点的 pNext 
        *pphead=pnew; //新结点变为链表头
    }else{
        while(pcur!=NULL) //插入中间
        {
            if(pcur->num>i)
            {
                ppre->pNext=pnew;
                pnew->pNext=pcur;
                break;
            }
            ppre=pcur; //前指针先赋给后指针
            pcur=pcur->pNext;
        }
        if(NULL==pcur) //未插入中间，就插入尾部
        {
            (*pptail)->pNext=pnew; //将新结点的地址赋给尾结点的 pnext 
            *pptail=pnew; //新结点变为链表尾部
        }
    }
}
void list_delete(pstu* pphead,pstu* pptail,int delete_num)
{
    pstu pcur,ppre;
    pcur=*pphead;
    ppre = pcur;
    if(pcur!=NULL)
    {
        if(pcur->num==delete_num) //如果要删除的 num 和头结点的值相等
        { *pphead=pcur->pNext; //改变头指针，指向下一个结点
        if(NULL==*pphead) //删除后链表为空
        { 
            *pptail=NULL;
        }
        free(pcur); //释放空间
    }else{ //删除中间结点及尾结点
        while(pcur!=NULL)
        {
            if(pcur->num==delete_num)
            {
                ppre->pNext=pcur->pNext;
                free(pcur);
                break;
            }
            ppre=pcur;
            pcur=pcur->pNext;
        }
        if(NULL==ppre->pNext)
        { 
            *pptail=ppre;
        }
        if(NULL==pcur)
        {
            printf("no this node\n");
        }
        }
    }else{
        printf("list is NULL\n");
    }
}

void list_modify(pstu phead,int i,float f)
{
    while(phead!=NULL)
    {
        if(phead->num==i)
        {
            phead->score=f;
            break;
        }
        phead=phead->pNext;
    }
    if(NULL==phead)
    {
        printf("no this node\n");
    }
}
