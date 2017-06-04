#include <iostream>
using namespace std;
double fac(int n); 
int main()
{
	while(520)
	{
	int n;
	cout<<"请输入你的n值:\n";
	cin>>n;
	cout<<"结果为:"<<fac(n)<<endl; 
	}
	return 0;
}
double fac(int n)
{
	int c;
	if(n==1)
	c=1;
	else{
		c=n*fac(n-1);
	} 
	return c;
}