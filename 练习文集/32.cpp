#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
	int n,m,i=0,j=0,sum=0;
	int s[100][100]; 
	cout<<"ÇëÊäÈën,mµÄÖµ\n"; 
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>s[i][j]; 
		}
	}
	j=0; 
	do
	{
	for(i=0;i<n;i++)
	{
		sum+=s[i][j];
	}
	cout<<sum<<" "; 
	j++;
	sum=0;
	}while(j<m);
	}
	return 0;
}