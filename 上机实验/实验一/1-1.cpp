#include <iostream>
using namespace std;
int main()
{
	int i=8,j=3;
	double x=1.42,y=5.2;
	cout<<"20/3.0+--i="<<20/3.0+--i<<"  "<<"i="<<i<<endl;
	i=8;
	i/=j+2;
	cout<<"i="<<i<<endl;
	i=8;
	cout<<"i/3+j%3+'0'="<<i/3+j%3+'0'<<endl;
	y+=x++-3; 
	cout<<"x="<<x<<"  "<<"y="<<y<<endl;
	x=1.42,y=5.2;
	y=13/2*(x=2.2-3.1);
	cout<<"x="<<x<<"  "<<"y="<<y<<endl;
	x=1.42,y=5.2;
	x=(i=2, j+=4, i+j/2.0);
	cout<<"i="<<i<<"  "<<"j="<<j<<"  "<<"x="<<x<<endl; 
	return 0;
}