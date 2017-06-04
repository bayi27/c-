#include<stdio.h>
#include<stdlib.h>
typedef struct DLNode
{
    int data;
    struct DLNode *next;
    struct DLNode *prior;
} DNLode;
void createDLNode(DLNode *&L)
{
    L = (DLNode *)malloc(sizeof(DLNode));
    L->prior = L;
    L->next = L;
}
void printDLNode(DLNode *L)
{
    DLNode *q;
    q=L->next;
    int i=0;
    while(q!=L)// 如果q=L 则是循环完一遍链表了
    {
        if(i++)//good idea!
        {
            putchar(' ');
        }
        printf("%d",q->data);
        q=q->next;
    }
    printf("\n");
}
void insertDLNode(DLNode *&L,int i,int e)
{
    DLNode *q,*qlen;
    q=L;
    qlen=L->next;
    int num=0;
    while(qlen!=L)//求出长度
    {
        num++;
        qlen=qlen->next;
    }
    int j=1;
    while(j<i)///不是j<i-1 ：查找
    {
        j++;
        q=q->next;
    }
    if(i>num+1||i<1)//越界
       return ;
    DLNode *s;
    s=(DLNode *)malloc (sizeof(DLNode));
    s->data = e;

    s->next = q->next;
    s->prior = q;
    q->next = s;
    q->next->prior = s;
    return ;
}
void deleteDLNode (DLNode *&L,int i)
{
    DLNode *q,*qlen;
    qlen=L->next;
    q=L;
    int num=0;
    while(qlen!=L)
    {
        qlen=qlen->next;
        num++;
    }
    if(i<1||i>num)//越界
    {
        return ;
    }
    int j=0;
    while(j<i-1)
    {
        q=q->next;
        j++;
    }
    DLNode *qfree;
    qfree= q->next;
    q->next=qfree->next;
    qfree->next->prior=q;
    free(qfree);

}
int main (void)
{
    int n;
    DNLode *L;
    createDLNode(L);
    while(~scanf("%d",&n))
    {
        switch(n)
        {
        case 0:
        {
            printDLNode(L);
            break;
        }
        case 1:
        {
            int i,e;
            scanf("%d%d",&i,&e);
            insertDLNode(L,i,e);
           // printDLNode(L);
            break;
        }
        case 2:
        {
            int i;
            scanf("%d",&i);
            deleteDLNode(L,i);
           // printDLNode(L);
            break;
        }
        default:
            break;
        }

    }
    return 0;
}