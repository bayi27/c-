#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
		int a,b,r1,j;
		cout<<"��������Ҫ���������a,b(a<b)\n";
		cin>>a>>b;
		r1=b%a;
		if(r1==0)
		{
			cout<<"�������������Լ��Ϊ"<<a<<endl; 
		}
		else
		{
			do{
				b=a%r1;
				j=b;
				a=r1;
				r1=b;
			}while(j!=0);
			cout<<"�������������Լ��Ϊ"<<a<<endl;
		}
	}
	return 0;
}