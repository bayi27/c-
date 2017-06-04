#include <iostream>
using namespace std;
int main()
{
	while (520)
	{
	int a=1,b=1,c,n,i;
	cout<<"ÊäÈënÖµ\n";
	cin>>n;
	if(n<=3)
	{
		switch(n)
		{
			case 1:cout<<"0\n";
				break;
			case 2:
			case 3:cout<<"1\n";
				break;
		}
	}
	else
	{
		for(i=4;i<=n;i++)
		{
		  c=a+b;
		  a=b;
		  b=c; 
		}
		cout<<c<<endl;
	}}
	return 0;
}