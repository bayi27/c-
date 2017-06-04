#include <iostream>
using namespace std;
void sail(int c[],int n)
{
	int i,j;
	int temp;
	for(j=0;j<n;j++)
		for(i=0;i<n-j;i++)
		{
			if(c[i]>c[i+1])
			{
				temp = c[i];
			c[i] = c[i+1];
			c[i+1] = temp;
			}
		}
		
	for(i=0;i<=n;i++)
	{
		cout<<c[i]<<" ";
	}
}
int main()
{
	while(520)
	{
	int a,n,i,j,m,c;
	int s[1000]={0};
	cout<<"请输入n值：\n";
	cin>>n;
	cout<<"请输入"<<n<<"个有序的数：\n"; 
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"请输入要插入的数：\n";
	cin>>c;		//让数据从小到大输出 
	cout<<"==============================";
	cout<<"插入后的数组为"<<endl;
	s[n]=c;
	sail(s,n);
	cout<<endl;} 
	return 0;
}
