#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while(520)
	{
	double a,b,n=-100000;
	cout<<"请依次输入a,b的值：\n";
	cout<<"a>=1且b>=2\n";
	cin>>a>>b;
	do{
	   n++;
	}while(pow(b,n)<=a);
	cout<<n<<endl;}
	return 0;
}