#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(a=1;a<6;a++)
	{
		for(b=1;b<=a;b++)
		{
			cout<<2*b-1;
		}
		for(c=a-1;c>0;c--)
		{
		    cout<<2*c-1;
		}
		cout<<endl;
	} 
	return 0;
}