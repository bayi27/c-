#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
	int n,m,i,j,sum=0;
	int s[100][100];//定义并初始化数组 
	cout<<"请输入你n,m\n";
	cin>>n>>m;
	for(i=0;i<m;i++)//m为行数 
	{
		for(j=0;j<n;j++)//内层为列数 
		{
			cin>>s[i][j];//依次输入数组数值 
		}
	} 
	j=0;
	for(i=m-1;i>=0;i--)//用i确定右下方列数 
	{
		int b,c;
		b=i;
		c=j;
		do{
			sum+=s[b][c];
		    b++;
			c++;
		}while(b<m);//循环加和右下方斜行 
		cout<<sum<<" ";
		sum=0;
	}
	i=0;
	sum=0;
	for(j=1;j<n;j++)//用j确定左上方行数 
	{
		int d,e;
		d=i;
		e=j;
		do{
		   sum+=s[d][e];
		   d++;
		   e++;
		}while(e<n);//循环加和左上方斜行 
		cout<<sum<<" ";
		sum=0;
	}
	cout<<endl;
	}
	return 0;
}
