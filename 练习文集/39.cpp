#include <iostream>
using namespace std;
int main()
{
	int s[100];
	int x,i,j,n;
	cout<<"������Ҫ���������������\n";
	cin>>n; 
	cout<<"���������飺\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"������Ҫ���������\n";
	cin>>x;
	s[n]=x; 
	for(i=1;i<=n;i++)
	{
		 int tmp=s[i];
         int j=i-1;
         while(j>=0&&s[j]>tmp)
               {
                 s[j+1]=s[j];
                 j--;
               }
               s[j+1]=tmp;
    }
	for(i=0;i<=n;i++)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}