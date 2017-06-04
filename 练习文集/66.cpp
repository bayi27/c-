#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char n1[100],n2[100];
	int a[100],b[100],c[100],i,j,n,lenn1,lenn2,lenn3;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));//对数组清0 
	gets(n1);
	gets(n2); //输入字符串 
	lenn1=strlen(n1);
	lenn2=strlen(n2);//计算长度 
	for(i=0;i<lenn1;i++)
	   a[lenn1-i]=n1[i];
	for(i=0;i<lenn2;i++)
	   b[lenn2-i]=n2[i];//将字符串转化为数组 
	if(lenn1==lenn2)
	{cout<<"0";
	return 0;}//长度相等时 
	else if(lenn1>lenn2){
		for(i=0;i<lenn1;i++)
		if(a[i]>b[i])
		{
			c[i]=a[i]+10-b[i];
			c[i+1]--;
		 }
		else{
			c[i]=a[i]-b[i];
		} 
	}
	else if(lenn1<lenn2){
		for(i=0;i<lenn2;i++)
		if(a[i]>b[i])
		{
			c[i]=a[i]+10-b[i];
			c[i+1]--;
		 }
		else{
			c[i]=a[i]-b[i];
		} 
	}
	lenn3=i;
	while((c[lenn3]==0)&&(lenn3>1))
	lenn3--; 
	for(i=lenn3;i>=0;i--)
	cout<<c[i];
	return 0;
 } 
