#include<iostream>
using namespace std;
int main()
{
	void xuanze(int s[],int n);
	int a[100];
	int i,n;
	cin>>n;//�������鳤�� 
	for(i=0;i<n;i++)
	{
		cin>>a[i];//����һ������  
	}
	xuanze(a,n);//ѡ������ 
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";//������� 
	}
	return 0;
 } 
 void xuanze(int s[],int n)
 {
 	int j,p,m,b;
 	for(j=0;j<n-1;j++)//ѡ���������λ��0-8 
 	{
 		p=j; 
 		for(m=j+1;m<n;m++)//ѡ����Ƚϵ�λ�� 
 		{
 			
 			if(s[p]>s[m])
 			{
 			
		    	p=m;//��¼�Ƚ�С������λ�� 
			 }
	    }
		if(p!=j)
		{
			b=s[j];
			s[j]=s[p];
			s[p]=b;
		} //�������j����λ�� 
	 }
 }

