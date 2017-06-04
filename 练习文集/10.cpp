#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
	while(1)
	{
	int a,b,c;
	//char ab,ac,x1,x2;
	int ab,ac,x1,x2;
	cout<<"请输入三个整数a,b,c"<<endl;
	cin>>a>>b>>c;
	if(ab=b*b-4*a*c>=0)
	{cout<<"此方程有解"<<endl;
	 x1=(-b+sqrt(ab))/2*a;
	 x2=(-b-sqrt(ab))/2*a;
	 cout<<"解为"<<x1<<x2<<endl;
	}
	else
	{cout<<"此方程无解"<<endl; 
	}}
	return 0;
}
