#include <iostream>
using namespace std;
void runnian(int x); 
int main()
{
	while(520)
	{
	int x;
	cout<<"请输入年份：\n";
	cin>>x;
	runnian(x);
	}
	return 0;
}
void runnian(int x)
{
	if(x%4==0&&x%100!=0||x%400==0)
	{
	    cout<<"这一年是闰年\n";
	}
	else{
		cout<<"这一年不是闰年\n";
	}
}