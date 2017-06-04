#include <iostream.h>
#include <cmath>
using namespace std; 
int main()
{
	while(1)
	{
		int n,j,k;
		cout<<"ÇëÊäÈëÄãµÄnÖµ\n";
		cin>>n;
		for(j=n;j>0;j--)
		{
			for(k=0;k<j;k++)
			{
				cout<<"*";
				if (k==j-1)
				    cout<<endl;
			}
		}
	}
	return 0;
}
