#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int a,b,x,n;
	float sum1=0,sum2=0,y;
	char c;
	do{
	sum1++;
	a=rand()%9+0;
	b=rand()%9+0;
	cout<<a<<"+"<<b<<"=?";
	cin>>x;
	if(x==a+b)
	{
	   cout<<"OK! good work!"<<endl;
	   sum2++;
	}
	else
	{
	   cout<<"NO! answer="<<a+b<<endl;
	}
	cout<<"continue or not?(y, n):";
	cin>>c;}while(c!='n');
	cout<<"did="<<sum1<<endl;
	cout<<"ok="<<sum2<<endl;
	y=sum2/sum1;
	cout<<"score="<<y<<endl;
	return 0;
}
