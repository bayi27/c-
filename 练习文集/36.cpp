#include <iostream>
using namespace std;
int main()
{
	int n,m=1,i,j=0;
	int s[100]; 
	cout<<"������n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
	     cin>>s[i];//��������n���� 
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
			m++;//��¼i��ֵ 
		};//Ѱ������ֵ 
	}
	cout<<s[j]<<" "<<(j<m?m:j);
	return 0;
}