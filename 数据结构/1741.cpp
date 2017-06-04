#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
#include<string.h>
using namespace std;
void hs(char*str,int *ss,int *sss)
{
        char *p=NULL;
        int zan;
        zan=atoi(strtok(str," "));
        for(int q=0;(p =strtok(NULL," "));q++)
        {
            if(q%2==0)
            {
                if(atoi(p)>=0)
                   ss[atoi(p)]=zan;
                else
                    sss[-1*atoi(p)]=zan;
            }
            else
            {
                zan=atoi(p);
            }
        }
        return;
}
 
void hss(char*str,int *ss,int *sss)
{       char *p1=NULL;
        int zan1;
        zan1=atoi(strtok(str," "));
        //cout<<zan1<<endl;
        for(int q=0;(p1 =strtok(NULL," "));q++)
        {
            if(q%2==0)
            {
                if(atoi(p1)>=0)
                   ss[atoi(p1)]+=zan1;
                else
                    sss[-1*atoi(p1)]+=zan1;
                //if(ss[atoi(p1)]>0)
                //    ss[atoi(p1)]+=zan1;
                //else
                //  ss[atoi(p1)]=zan1;
                //cout<<ss[atoi(p1)]<<endl;
            }
            else
            {
                zan1=atoi(p1);
                //cout<<zan1<<endl;
            }
        }
        return;
}
 
int main()
{
     
    char strA[500],strB[500];
    while(gets(strA) && strlen(strA))
    {
        int ss[300]={0},sss[300]={0};
        hs(strA,ss,sss);
        if(gets(strB)&& strlen(strB))
            hss(strB,ss,sss);
 
        int gg;
        for(int j=0;j<150;j++)
        {
            if(ss[j]!=0)
                gg=j;
        }
        //gg--;
        for(;gg>=0;gg--)
          if(ss[gg]!=0)
              cout<<ss[gg]<<' '<<gg<<' ';
        for(int y=0;y<300;y++)
            if(sss[y]!=0)
                cout<<sss[y]<<' '<<-1*y<<' ';
        cout<<endl;
    }
    return 0;
}
