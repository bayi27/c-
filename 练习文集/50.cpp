#include <iostream>
#include <cmath>
using namespace std;
int fly(int x);
int main()
{
	while(520)
	{
		int x;
		cout<<"请输入一个正整数：\n";
		cin>>x;
		if(x==1)
		{
		   cout<<"不是素数\n"; 
		}
		else
		{
		if(fly(x))
		{
		   cout<<"是素数\n";
		}
		else
		{
		   cout<<"不是素数\n"; 
		}}
	} 
	return 0;
}
int fly(int x)
{ 
	int i,y,a;
	y=sqrt(double(x));
	for(i=2;i<=y;i++)
		if(x%i==0)   
		   break;
		   if(i>=y+1)
		   {
		   	a=1;
		   }
		   else
		   {
		   a=0;
		   }
	return a;
}