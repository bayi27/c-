#include<iostream>
using namespace std;
int main()
{
	int a[50][50],b[50][50],c[50][50],d[50][50],e[50][50];
	int i,j,m;
	cin>>m;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<" ";
		}
	}cout<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			for(int k=0;k<m;k++)
			{
			   int s=0;
			   s+=a[i][k]*b[k][j];
			   d[i][j]=s;
			   cout<<d[i][j]<<" ";
			}
		}
	}cout<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			e[i][j]=a[j][i];
			cout<<e[i][j]<<" ";
		}
	}cout<<endl;
	system("pause");
	return 0;
}

