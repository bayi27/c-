#include<string.h>  
#include<malloc.h>
#include<stdio.h>   
#include<stdlib.h>
#include<math.h>
#define TRUE 1  
#define FALSE 0  
#define OK 1  
#define ERROR 0  
#define INFEASIBLE -1
typedef int Status;  
typedef int Boolean;
typedef int ElemType;
struct LNode  
{  
    ElemType data;  
    struct LNode *next;  
};  
typedef struct LNode *LinkList;  
  
Status GetElem(LinkList L,int i,ElemType *e)
{ 
    int j=1;
    LinkList p=L->next;
    while(p&&j<i) 
    {  
        p=p->next;  
        j++;  
    }  
    if(!p||j>i)
        return ERROR;  
    *e=p->data; 
    return OK;  
}  
  
Status ListInsert(LinkList L,int i,ElemType e)
{
    int j=0;  
    LinkList p=L,s;  
    while(p&&j<i-1)
    {  
        p=p->next;  
        j++;  
    }  
    if(!p||j>i-1) 
        return ERROR;  
    s=(LinkList)malloc(sizeof(struct LNode)); 
    s->data=e;
    s->next=p->next;  
    p->next=s;  
    return OK;  
}
Status ListDelete(LinkList L,int i,ElemType *e) 
{
    int j=0;  
    LinkList p=L,q;  
    while(p->next&&j<i-1)  
    {  
        p=p->next;  
        j++;  
    }  
    if(!p->next||j>i-1)
        return ERROR;  
    q=p->next;  
    p->next=q->next;  
    *e=q->data;  
    free(q);  
    return OK;  
}  
  
void CreateList(LinkList *L,int n)  
{
    int i;  
    LinkList p;  
    *L=(LinkList)malloc(sizeof(struct LNode));  
    (*L)->next=NULL; 
    for(i=n; i>0; --i)  
    {  
        p=(LinkList)malloc(sizeof(struct LNode)); 
        scanf("%d",&p->data);   
        p->next=(*L)->next;
        (*L)->next=p;  
    }  
}  
  
int ShowList(LinkList L)  
{  
    int numOfList = 0; 
    LinkList p = L->next;  
    while(p) 
    {  
        if(numOfList)  
        {  
            putchar(' ');  
        }  
        numOfList++; 
        printf("%d",p->data); 
        p = p->next;  
    }  
    if(numOfList == 0) 
    {  
        return 0;  
    }  
    else  
    {  
        putchar('\n'); 
        return numOfList;
    }  
}  
  
int main()  
{  
    int n; 
    int m;  
    char strInst[30]; 
    int a; 
    LinkList L;
    int e; 
    scanf("%d", &n); 
    CreateList(&L, n); 
    scanf("%d", &m);  
    while(m--)
    {  
        scanf("%s", strInst);  
        if(strcmp(strInst, "get") == 0) 
        {  
            scanf("%d", &a);  
            if(GetElem(L, a, &e) == OK)
            {  
                printf("%d\n", e); 
            }  
            else 
            {  
                puts("get fail");
            }
        }  
        else if(strcmp(strInst, "insert") == 0)  
        {  
            scanf("%d%d", &a, &e);  
            if(ListInsert(L, a, e) == OK)  
            {  
                puts("insert OK");
            }
            else  
            {
                puts("insert fail"); 
            }  
        }
        else if(strcmp(strInst, "delete") == 0)
        {  
            scanf("%d",&a);
            if(ListDelete(L, a, &e) == OK) 
            {  
                puts("delete OK");  
            }  
            else  
            {  
                puts("delete fail");
            }  
        }  
        else if(strcmp(strInst, "show") == 0) 
        {  
            if(ShowList(L) == 0)
            {  
                puts("Link list is empty");
            }  
        }  
    }  
  
    return 0;  
}