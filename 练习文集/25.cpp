#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while(520)
	{
		int n,i,j;
		cout<<"ÇëÊäÈëÄãµÄnÖµ\n";
		cin>>n;
		for(i=0;i<2*n;i++,cout<<endl)
		{
			for(j=0;j<fabs(n-i);j++)
				cout<<" ";
			for(j=0;j<2*n-1-fabs(2*(n-i));j++)
				cout<<"*";
		}
	} 
	return 0;
}