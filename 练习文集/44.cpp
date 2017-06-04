#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int s[100];
	int i,n,x,lf=0,rg,md,j=1;
	cout<<"请输入数组的长度：\n";
	cin>>n;
	rg=n-1; 
	cout<<"请输入有序数组：\n";
	for(i=0;i<n;i++)
	{ 
	 cin>>s[i];}
    cout<<"请输入要查找的数：\n";
	cin>>x;
	for(;rg>lf;)
	{
		md=(int)(lf+rg)/2;
		if(s[md]==x)
		{
			cout<<"第"<<md+1<<"位";
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
	 cout<<"查无此数。\n"; 
	return 0;
 } 
