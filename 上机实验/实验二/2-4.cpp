#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while(520)
	{
	double a,b,n=-100000;
	cout<<"����������a,b��ֵ��\n";
	cout<<"a>=1��b>=2\n";
	cin>>a>>b;
	do{
	   n++;
	}while(pow(b,n)<=a);
	cout<<n<<endl;}
	return 0;
}