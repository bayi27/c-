#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int s[100];
	int i,n,x,lf=0,rg,md,j=1;
	cout<<"����������ĳ��ȣ�\n";
	cin>>n;
	rg=n-1; 
	cout<<"�������������飺\n";
	for(i=0;i<n;i++)
	{ 
	 cin>>s[i];}
    cout<<"������Ҫ���ҵ�����\n";
	cin>>x;
	for(;rg>lf;)
	{
		md=(int)(lf+rg)/2;
		if(s[md]==x)
		{
			cout<<"��"<<md+1<<"λ";
			j=0;
			break; 
		}
		else if(s[md]<x){
			lf=md+1;
		}
		else{
			rg=md-1;
		}
	 }
	 if(j)
	 cout<<"���޴�����\n"; 
	return 0;
 } 
