#include <iostream>
using namespace std;
int main()
{
	int s[100];
	int x,i,j,n;
	cout<<"请输入要输入的数的数量：\n";
	cin>>n; 
	cout<<"请输入数组：\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"请输入要插入的数：\n";
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