#include <iostream>
#include <cmath>
using namespace std;
int fly(int x);
int main()
{
	while(520)
	{
		int x;
		cout<<"������һ����������\n";
		cin>>x;
		if(x==1)
		{
		   cout<<"��������\n"; 
		}
		else
		{
		if(fly(x))
		{
		   cout<<"������\n";
		}
		else
		{
		   cout<<"��������\n"; 
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