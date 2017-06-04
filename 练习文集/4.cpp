#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double r,c;
	cin>>r;
	c=2*r*3.1415926;
	cout<<setiosflags(ios::fixed)<<setprecision(5)
	<<c;
	return 0;
}
