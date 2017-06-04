#include<iostream>
#include<cstring>
#include<cstdio> 
using namespace std;
int main()
{
	char n1[100],n2[100];
	int a[100],b[100],c[100],lenn1,lenn2,i,j,n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));//对a,b数组清0 
	gets(n1);
	gets(n2);//获取字符 
	lenn1=strlen(n1);
	lenn2=strlen(n2);//计算字符长度 
	for(i=0;i<lenn1;i++)
		a[lenn1-i]=n1[i]-'0';
	for(j=0;j<lenn2;j++)
	    b[lenn2-j]=n2[j]-'0';//将字符转化为数组 
	i=1;n=0;//n记录进位 
	while(i<=lenn1||i<=lenn2)
	{
		c[i]=a[i]+b[i]+n;//加上进位 
		n=c[i]/10;//记录进位的值 
		c[i]=c[i]%10;//记录真值 
		i++;
		//cout<<c[i]<<" ";
	 } 
	c[i]=n;
	if(c[i]==0)
	     i--;//去除为0的高位 
	for(j=i;j>0;j--)
	     cout<<c[j];    
	return 0;
 } 
