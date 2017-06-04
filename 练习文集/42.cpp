#include <iostream>
using namespace std;
int main()
{
	int i,n;
	int s[100]; 
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=n-1;i>=0;i--)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}