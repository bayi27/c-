#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while(520)
	{
	int x,k,n=0,a=0,newx=0;
	double b;
	int s[1000];
	cout<<"������һ���޷��ų�������\n";
	cin>>x;
	if(x<10)
	{
		newx=x;
	}//xΪһλ��ʱ 
	else{
	cout<<"������һ����������\n";
	cin>>k;
	while(x>=10)
	{
		s[a]=x%10;
        x=(x-s[n])/10;
		n++;
		a++;
	} 
	s[a]=x;
	n++;//��¼λ���Լ�ÿλ������
	if(k>n)
	{
		newx=newx;
	}
	else
	{
		for(int i=k-1;i<n;i++)
		{
			s[i]=s[i+1];
		}//ɾȥָ����λ�� 
		for(int i=0;i<n-1;i++)
		{
			b=i;
			newx+=s[i]*pow(10.0,b);
		}//ʣ�µ�λ���Ӻ� 
	}}
	cout<<"newx="<<newx<<endl;
	}
	return 0;
}
