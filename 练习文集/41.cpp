#include <iostream>
using namespace std;
 void hebing(int a[],int p,int r,int q)
 {
    int lf[100],rg[100];
	int n1,n2,j,m,k;
	n1=r-p+1;//�����������ĳ��� 
	n2=q-r; //�����ұ�����ĳ���
	for(j=0;j<n1;j++)
	{
		lf[j]=a[p+j];//������鸳ֵ 
	 } 
	for(m=0;m<n2;m++)
	{
		rg[m]=a[r+m+1];//�ұ����鸳ֵ 
	 }
	//������a����
	m=j=0;
	k=p;
	while(j<n1&&m<n2)
	{
	if(lf[j]<=rg[m])
	{
		a[k++]=lf[j++];
	}
	else{
		a[k++]=rg[m++];
	}}//�Ƚ������С����a���� 
	for (;j<n1;j++)   
		a[k++]=lf[j];
	for (;m<n2;m++)    
		a[k++]=rg[m];
	//�ж������Ƿ���ȫ�鲢 
}
void huafen(int a[],int p,int q)
{
	int r;
	if(p<q)
	{
		r=(int)((p+q)/2);
		huafen(a,p,r);
		huafen(a,r+1,q);//�ݹ�����ҷ���
		hebing(a,p,r,q);//�ϲ����� 
	}
}
int main()
{
	int i,n;
	int s[100];
	cin>>n;//��������ĳ���
	for(i=0;i<n;i++)
	{
		cin>>s[i];//����һ������ 
	 }
	huafen(s,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<s[i]<<" ";//������ 
	}
  
 } 
