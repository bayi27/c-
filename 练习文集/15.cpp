#include <iostream.h>
#include <cmath>
using namespace std; 
int main()
{
	while (1)
	{
	float x,y,r,h,e;
	cout<<"������r,h��ֵ�����꣨x��y��"<<endl;
	cin>>r>>h>>x>>y;
	e=((r-sqrt(x*x+y*y))/r)*h;
	cout<<e<<endl;
	}
	return 0;
}