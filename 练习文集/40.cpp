#include <iostream>
using namespace std;
int main()
{
	int i,n,m;
	int s[100],v[100],f[100];
	cout<<"��ֱ�����n,m��ֵ��\n";
	cin>>n>>m;
	cout<<"�������һ���������飺\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"������ڶ����������飺\n";
	for(i=0;i<m;i++)
	{
		cin>>v[i];
	}
	i=n+m-1;
	int last1=n-1,last2=m-1;
	while(i>=0)
	{
	   if(s[last1]>v[last2])
	   {
	       f[i]=s[last1];
	       last1--;
	   }
	   else
	   {
	       f[i]=v[last2];
	       last2--;
	   }
	   cout<<f[i]<<" ";
	   i--; 	
	}
	cout<<endl;
	for(i=0;i<n+m;i++)
	{
		cout<<f[i]<<" ";
	} 
	return 0;
}