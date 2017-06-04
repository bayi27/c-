#include <iostream>
using namespace std;
 void hebing(int a[],int p,int r,int q)
 {
    int lf[100],rg[100];
	int n1,n2,j,m,k;
	n1=r-p+1;//计算左边数组的长度 
	n2=q-r; //计算右边数组的长度
	for(j=0;j<n1;j++)
	{
		lf[j]=a[p+j];//左边数组赋值 
	 } 
	for(m=0;m<n2;m++)
	{
		rg[m]=a[r+m+1];//右边数组赋值 
	 }
	//对数组a排序
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
	}}//比较两组大小并入a数组 
	for (;j<n1;j++)   
		a[k++]=lf[j];
	for (;m<n2;m++)    
		a[k++]=rg[m];
	//判断数组是否完全归并 
}
void huafen(int a[],int p,int q)
{
	int r;
	if(p<q)
	{
		r=(int)((p+q)/2);
		huafen(a,p,r);
		huafen(a,r+1,q);//递归对左右分组
		hebing(a,p,r,q);//合并数组 
	}
}
int main()
{
	int i,n;
	int s[100];
	cin>>n;//输入数组的长度
	for(i=0;i<n;i++)
	{
		cin>>s[i];//输入一个数组 
	 }
	huafen(s,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<s[i]<<" ";//输出结果 
	}
  
 } 
