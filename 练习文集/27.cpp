#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double a=-10,b=10,c,x;
	do{
		c=(a+b)/2;
		if(2*c*c*c-4*c*c+3*c-6<0)
		{
		   a=c;
		}
		else
		{
		   b=c;
		}
		x=c;
	}while(2*x*x*x-4*x*x+3*x-6!=0);
	cout<<setiosflags(ios::fixed)<<setprecision(2)
	<<x;
	return 0;
}
