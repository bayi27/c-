#include <iostream.h>
using namespace std; 
int main()
{
	while(1)
	{
	float a,b,c,d;
	cout<<"������������"<<endl;
	cin>>a>>b>>c;
    d=(((a>b)?a:b)>c?((a>b)?a:b):c);
    cout<<"������Ϊ"<<d<<endl;
	}
	return 0;
}
