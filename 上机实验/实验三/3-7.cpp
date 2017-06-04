#include<iostream>
#include<cmath>
using namespace std;
int fanxu(int x);
int main()
{
	int n,b;
	while(cin>>n)
	{
	   b=fanxu(n);
	   cout<<n+b<<endl;
    }
}
int fanxu(int x)
{
	int a[100];
	int i=0,j,sum=0;
	do{
		a[i]=x%10;
		x=x/10;
		i++;
	}while(x!=0);
	for(j=i-1;j>=0;j--)
	sum+=a[j]*pow(10,i-1-j);
	return sum;
 } 

