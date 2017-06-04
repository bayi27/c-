#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
	int i,j,n;
	int s[100][100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i][0]=1;
		for(j=0;j<=i;j++)
		{
			if(j==i||j==0)
			{
				s[i][j]=1;
			}
			else
			{
				s[i][j]=s[i-1][j-1]+s[i-1][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<s[i][j]<<" ";
			if(j==i)
			{
				cout<<endl;
			}
		}
	}}
	return 0;
}