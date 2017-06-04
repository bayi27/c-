#include <iostream.h>
using namespace std; 
int main()
{
	while(1)
	{
	float a,b,c,d;
	cout<<"请输入三个数"<<endl;
	cin>>a>>b>>c;
    d=(((a>b)?a:b)>c?((a>b)?a:b):c);
    cout<<"最大的数为"<<d<<endl;
	}
	return 0;
}
