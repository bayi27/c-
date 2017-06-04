#include<iostream>
using namespace std;
typedef struct List{
	int date[200];
	int length;
}List;
List La,Lb;
void InitList(List &L)  
{  
    L.length=0;  
}
int ListLength(List L){  
    return L.length;  
}
int GetElem(List L,int p,int &e){  
    if(p<1||p>L.length)  
        return 0;  
    e=L.date[p];  
    return 0;  
}
int ListInsert(List &L,int p,int e){  
    int i;  
    if(p<1||p>L.length||L.length==200-1)  
        return 0;  
    for(i=L.length;i>=p;--i)  
        L.date[i+1]=L.date[i];  
    L.date[p]=e;  
    return 0;  
}
void MergeList(List La,List Lb,List &Lc){  
    int La_len,Lb_len;  
    int ai,bj;  
    int i=1,j=1,k=0;  
    InitList(Lc);  
    La_len=ListLength(La);  
    Lb_len=ListLength(Lb);  
    Lc.length=La.length+Lb.length;  
    while((i<=La_len)&&(j<=Lb_len)){  
        GetElem(La,i,ai);  
        GetElem(Lb,j,bj);  
        if(ai<=bj){  
            ListInsert(Lc,++k,ai);  
            ++i;  
        }else{  
            ListInsert(Lc,++k,bj);  
            ++j;  
        }  
    }  
    while (i<=La_len){  
        GetElem(La,i++,ai);  
        ListInsert(Lc,++k,ai);  
    }  
    while(j<=Lb_len){  
        GetElem(Lb,j++,bj);  
        ListInsert(Lc,++k,bj);  
    }     
}
int main(){
	List La,Lb,Lc;  
    InitList(La);  
    InitList(Lb);  
    while(cin>>La.length){  
        for(int i=1;i<=La.length;i++){  
            cin>>La.date[i];  
        }  
        cin>>Lb.length;  
        for(int i=1;i<=Lb.length;i++){  
            cin>>Lb.date[i];  
        }  
        MergeList(La,Lb,Lc);  
        if(Lc.length!=0){  
            cout<<Lc.date[1];  
            for(int i=2;i<=Lc.length;i++)  
                cout<<" "<<Lc.date[i];  
        }  
        cout<<endl;  
    }  
	return 0;
}