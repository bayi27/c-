#include <iostream>
using namespace std;
void runnian(int x); 
int main()
{
	while(520)
	{
	int x;
	cout<<"��������ݣ�\n";
	cin>>x;
	runnian(x);
	}
	return 0;
}
void runnian(int x)
{
	if(x%4==0&&x%100!=0||x%400==0)
	{
	    cout<<"��һ��������\n";
	}
	else{
		cout<<"��һ�겻������\n";
	}
}