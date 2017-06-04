#include<iostream>
using namespace std;
int main()
{
	void xuanze(int s[],int n);
	int a[100];
	int i,n;
	cin>>n;//输入数组长度 
	for(i=0;i<n;i++)
	{
		cin>>a[i];//输入一个数组  
	}
	xuanze(a,n);//选择排序 
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";//输出数组 
	}
	return 0;
 } 
 void xuanze(int s[],int n)
 {
 	int j,p,m,b;
 	for(j=0;j<n-1;j++)//选择待交换的位数0-8 
 	{
 		p=j; 
 		for(m=j+1;m<n;m++)//选择待比较的位数 
 		{
 			
 			if(s[p]>s[m])
 			{
 			
		    	p=m;//记录比较小的数的位置 
			 }
	    }
		if(p!=j)
		{
			b=s[j];
			s[j]=s[p];
			s[p]=b;
		} //如果不是j互换位置 
	 }
 }

