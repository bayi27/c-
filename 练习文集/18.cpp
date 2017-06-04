#include <iostream.h>
using namespace std; 
int main()
{
	while(1)
	{
	float a,b;
	cout<<"请输入成绩及素质分"<<endl;
	cin>>a>>b;
	if(a>=90&&b>=90)
	{
	 cout<<"great"<<endl;
	}
	else
	{
	if(a>=60||b>=60)
	{
	cout<<"so-so"<<endl;
	}
	else
	{
	 cout<<"bad"<<endl; 
	}
	}}
	return 0;
}
