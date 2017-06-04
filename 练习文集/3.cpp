#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double a,h,s;
	cin>>a>>h;
	s=a*h*0.5;
	cout<<setiosflags(ios::fixed)
	<<setprecision(5)
	<<s;
	return 0;
}
