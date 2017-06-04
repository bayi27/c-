#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef struct
{
    char name[100];
}ElemType;
typedef struct
{
    ElemType * elem;
    int length;
    int listsize;
}List;
int InitList(List &L)
{
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
    if(!L.elem)
        return 0;
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return 1;
}
int ListInsert(List &L,int i,ElemType e)
{
    ElemType *p;
    if(i<1||i>L.length+1)
        return 0;
    if(L.length>=L.listsize)
    {
        ElemType *newbase;
        newbase = (ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
        if(!newbase)
        {
            return 0;
        }
        L.elem = newbase;
        L.listsize+=LISTINCREMENT;
    }
    ElemType *q = &(L.elem[i-1]);
    for(p = &(L.elem[L.length-1]);p>=q;--p)
        *(p+1)=*p;
    *q=e;
    ++L.length;
    return 1;
}

int ListDlete (List &L,int i,ElemType e)
{
    ElemType *p,*q;
    if(i<1||i>L.length)
        return 0;

    p=&(L.elem[i-1]);
    e=*p;
    q=L.elem+L.length-1;
    for(++p;p<=q;++p)
    {
        *(p-1)=*p;
    }
    --L.length;
    return 1;
}
int LocateElem(List L,ElemType e,int(*compare)(ElemType,ElemType))
{
    int i;
    ElemType *p;
    i=1;
    p=L.elem;
    while(i<=L.length&&!(*compare)(*p++,e))
        ++i;
    if(i<=L.length)
        return i;
    else
        return 0;
}
void listshow(List L)
{
    int i;
    for(i=0;i<L.length;i++)
    {
        if(i)
            putchar(' ');
        printf("%s",L.elem[i].name);
    }
    putchar('\n');
}
int cmp(ElemType e1, ElemType e2)
{
       return (int)!strcmp(e1.name, e2.name);
}
int main (void)
{
    char mark[10];
    List nameList;
    InitList(nameList);
    int number;
    ElemType e;
    while(~scanf("%s",mark))
    {

        if(strcmp(mark,"insert")==0)
        {
            scanf("%d %s",&number,e.name);
            ListInsert(nameList,number,e);
        }
        else if(strcmp(mark,"show")==0)
            listshow(nameList);
        else if(strcmp(mark,"delete")==0)
        {
            scanf("%s",e.name);
            number=LocateElem(nameList,e,cmp);
            ListDlete(nameList,number,e);
        }
        else if(strcmp(mark,"search")==0)
        {
            scanf("%s",e.name);
            printf("%d\n",LocateElem(nameList,e,cmp));
        }
    }
    return 0;
}