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
	cout<<"��������������a,b,c"<<endl;
	cin>>a>>b>>c;
	if(ab=b*b-4*a*c>=0)
	{cout<<"�˷����н�"<<endl;
	 x1=(-b+sqrt(ab))/2*a;
	 x2=(-b-sqrt(ab))/2*a;
	 cout<<"��Ϊ"<<x1<<x2<<endl;
	}
	else
	{cout<<"�˷����޽�"<<endl; 
	}}
	return 0;
}
