#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
	int n,m,i,j,sum=0;
	int s[100][100];//���岢��ʼ������ 
	cout<<"��������n,m\n";
	cin>>n>>m;
	for(i=0;i<m;i++)//mΪ���� 
	{
		for(j=0;j<n;j++)//�ڲ�Ϊ���� 
		{
			cin>>s[i][j];//��������������ֵ 
		}
	} 
	j=0;
	for(i=m-1;i>=0;i--)//��iȷ�����·����� 
	{
		int b,c;
		b=i;
		c=j;
		do{
			sum+=s[b][c];
		    b++;
			c++;
		}while(b<m);//ѭ���Ӻ����·�б�� 
		cout<<sum<<" ";
		sum=0;
	}
	i=0;
	sum=0;
	for(j=1;j<n;j++)//��jȷ�����Ϸ����� 
	{
		int d,e;
		d=i;
		e=j;
		do{
		   sum+=s[d][e];
		   d++;
		   e++;
		}while(e<n);//ѭ���Ӻ����Ϸ�б�� 
		cout<<sum<<" ";
		sum=0;
	}
	cout<<endl;
	}
	return 0;
}
