﻿#include<iostream>
using namespace std;
class integer{
public:
	void set();
	void add();
	void del();
	friend void inter(integer&a,integer&b);
	void decide();
	void show();
private:
	int num[50];
	int k;
};
void integer::set()
{
	int p;
	cout<<"�������������ϵ�Ԫ�ظ�����";
	cin>>k;
	cout<<"�����뼯�ϵ�Ԫ�أ�";
	for(p=0;p<k;p++)
	 cin>>num[p];
}
void integer::add()
{
	char d;
	do
	{
	int z,q;
	bool leap=true;
	cout<<"������Ҫ�����Ԫ�أ�";
	cin>>z;
	for(q=0;q<k;q++)
	if(num[q]==z)
	{
		leap=false;
		break;
	}   
	if(leap)
	{   
		num[k]=z;
		cout<<"��ӳɹ�"<<endl;
		cout<<"��������Y/y,��������N/n:";
		k++;
		cin>>d;
	}
	if(!leap)
	{
		cout<<"��������Y/y,��������N/n:";
		cin>>d;
	}
	}while(d=='y'||d=='Y');
}  
void integer::del()
{  
	int m;  
	char x;  
	do
	{    
		cout<<"������Ҫ�ÿյ�Ԫ�ص���ţ�";
		cin>>m;
		for(;m<k;m++)
			num[m-1]=num[m];
		if(m<k)
		{     
			k--;     
			cout<<"�ÿճɹ�"<<endl;
		} 
		else{
			cout<<"�޴�Ԫ��"<<endl;
		}
		cout<<"��������Y/y,��������N/n:";
		cin>>x;
	}while(x=='y'||x=='Y');
}  
void integer::decide()
{  
	int n,f;
	char y;  
	do
	{   
		bool flag=false;
		cout<<"������Ҫ�ҵ�Ԫ�أ�"; 
        cin>>n;
        for(f=0;f<k;f++) 
	     if(num[f]==n)
	     {     
		  flag=true; 
		  cout<<"�ڼ�����"<<endl;
		  break;
	     }    
	     if(!flag){
		  cout<<"���ڼ�����"<<endl;
		 }
	    cout<<"��������Y/y,��������N/n:";
	    cin>>y;
	}while(y=='y'||y=='Y');
}
void integer::show()
{  
	int l,loop=0;
	for(l=0;l<k;l++)
	{ 
		cout<<num[l]<<" ";
		loop++;
		if(loop==5)
			cout<<endl;
	}    cout<<endl;
}
void inter(integer &a,integer &b)
{ 
	int i,j,e=0;  
	cout<<"���Ͻ�����"<<endl;
	for(i=0;i<a.k;i++)   
		for(j=0;j<b.k;j++)
			if(a.num[i]==b.num[j])
			{     
				cout<<b.num[j]<<" "; 
				e++;     
				if(e==5)
				cout<<endl;
			}  
			cout<<endl;
}  
int main() 
{  
 integer t1,t2;
 cout<<"����һ"<<endl;
 t1.set();  
 cout<<"���϶�"<<endl; 
 t2.set();  
 cout<<"�ڼ���һ�����Ԫ�أ�"<<endl;  
 t1.add();  
 cout<<"�ڼ��϶������Ԫ�أ�"<<endl; 
 t2.add();   
 cout<<"�ڼ���һ���ÿ�Ԫ�أ�"<<endl;   
 t1.del(); 
 cout<<"�ڼ��϶����ÿ�Ԫ�أ�"<<endl;
 t2.del();   
 inter(t1,t2);
 cout<<"�жϴ�Ԫ���Ƿ��ڼ���һ�У�"<<endl;
 t1.decide();  
 cout<<"�жϴ�Ԫ���Ƿ��ڼ��϶��У�"<<endl;
 t2.decide();  
 cout<<"�������һ��"<<endl;  
 t1.show();     
 cout<<"������϶���"<<endl; 
 t2.show();   
 return 0; 
} 
