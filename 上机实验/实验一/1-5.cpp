#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	while(520)
	{
	int a,b,c,d,e,f;
	cout<<"请输入第一个时刻：\n";
	cin>>a>>b>>c;
	if(a>24||a<0||b>60||b<0||c>60||c<0)
	{
		cout<<"非法数据\n";
	}
	cout<<"请输入第二个时刻：\n"; 
	cin>>d>>e>>f;
	if(d>24||d<0||e>60||e<0||f>60||f<0)
	{
		cout<<"非法数据\n";
	}
	cout<<abs((a-d)*3600+(b-e)*60+(c-f))<<endl;
	}
	return 0;
}