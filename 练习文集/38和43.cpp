#include <iostream>
using namespace std;
void fly(int s[],int x); 
int main()
{
	while(520)
	{
	int s[100];
	int i,n,m;
	cout<<"���������ĸ���n:\n";
	cin>>n;
	cout<<"�����뺬��"<<n<<"����������:\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"������Ҫ���������\n";
	cin>>s[n];
	//s[n]=m;
	fly(s,n);
	cout<<"�ź�˳�������Ϊ��\n";
	for(i=0;i<=n;i++)
	{
		cout<<s[i]<<" "; 
	}
	cout<<endl;}
	return 0;
}
void fly(int s[],int x)
{
	int i,j,t;
	for(i=0;i<x;i++)
	{
		for(j=0;j<x-i;j++)
		{
			if(s[j]>s[j+1])
			{
			     t=s[j+1];
			     s[j+1]=s[j];
			     s[j]=t;
			}
		}
	}
}