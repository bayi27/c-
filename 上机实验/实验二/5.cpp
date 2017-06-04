#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while(520)
	{
	int x,k,n=0,a=0,newx=0;
	double b;
	int s[1000];
	cout<<"请输入一个无符号长整数：\n";
	cin>>x;
	if(x<10)
	{
		newx=x;
	}//x为一位数时 
	else{
	cout<<"请输入一个正整数：\n";
	cin>>k;
	while(x>=10)
	{
		s[a]=x%10;
        x=(x-s[n])/10;
		n++;
		a++;
	} 
	s[a]=x;
	n++;//记录位数以及每位的数字
	if(k>n)
	{
		newx=newx;
	}
	else
	{
		for(int i=k-1;i<n;i++)
		{
			s[i]=s[i+1];
		}//删去指定的位数 
		for(int i=0;i<n-1;i++)
		{
			b=i;
			newx+=s[i]*pow(10.0,b);
		}//剩下的位数加和 
	}}
	cout<<"newx="<<newx<<endl;
	}
	return 0;
}
