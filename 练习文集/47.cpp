#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
	int fly(int x);
	int n,i,sum=0;
	cout<<"���������nֵ:\n"; 
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=fly(i);
	}
	cout<<"���Ϊ:"<<sum<<endl; 
	}
	return 0;
}
int fly(int x)
{
	int i,b,d=1;
	for(i=1;i<=x;i++)
	{
		b=i*d;
		d=b;
	}
	return d;
}