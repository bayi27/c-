#include<iostream>
using namespace std;
int main()
{
	int x[50],y[50];
	int j,m,i;
	cin>>i;
	for(j=0;j<i;j++)
	{
		cin>>x[j];
	}
	int sum=0,n;
	for(j=0;j<i;j++)
	{
		sum+=x[j];
	 } 
	int ave=sum/i;
	for(j=0;j<i;j++)
	{
		if(x[j]>ave)
		n++;
	 } 
	 int c=0,q;
	for(j=0;j<i;j++)
	{
		q=1;
		for(m=0;m<j;m++)
		{
			if(x[j]==x[m])
			{
				q=0;
			}
		}
		if(q)
		{
		y[c]=x[j];
		c++;}
	}
	cout<<ave<<" "<<n<<endl;
	for(j=0;j<c;j++)
	cout<<y[j]<<" ";
	return 0;
 } 
