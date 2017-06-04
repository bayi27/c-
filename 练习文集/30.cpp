#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
		int a,b,r1,j;
		cout<<"请输入你要求的两个数a,b(a<b)\n";
		cin>>a>>b;
		r1=b%a;
		if(r1==0)
		{
			cout<<"这两个数的最大公约数为"<<a<<endl; 
		}
		else
		{
			do{
				b=a%r1;
				j=b;
				a=r1;
				r1=b;
			}while(j!=0);
			cout<<"这两个数的最大公约数为"<<a<<endl;
		}
	}
	return 0;
}