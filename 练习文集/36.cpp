#include <iostream>
using namespace std;
int main()
{
	int n,m=1,i,j=0;
	int s[100]; 
	cout<<"请输入n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
	     cin>>s[i];//依次输入n个数 
	} 
	for(i=1;i<n;i++)
	{
		if(s[j]>s[i])
		{
		    s[j]=s[j];
		}
		else
		{
			s[j]=s[i];
			m++;//记录i的值 
		};//寻找最大的值 
	}
	cout<<s[j]<<" "<<(j<m?m:j);
	return 0;
}