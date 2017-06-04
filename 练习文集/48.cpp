#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double sinh(double x); 
const double e=2.7182; 
int main()
{
	while(520)
	{
	double y,x;
	cout<<"ÇëÊäÈëxµÄÖµ\n";
	cin>>x;
	y=sinh(exp(sinh(x)));
	cout<<setiosflags(ios::fixed);
	cout<<setprecision(4);
	cout<<y<<endl;
	}
	return 0;
}
double sinh(double x)
{
	double y;
	y=(exp(x)-exp(-x))/2;
	return y;
}