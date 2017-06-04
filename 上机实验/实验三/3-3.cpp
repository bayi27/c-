#include<iostream>
using namespace std;
int maxsum(int i);
int main()
{
    int i,t,n,m;
    int s[100];
    while(cin>>n>>m){
    for(i=n;i<=m;i++)
	{
	s[i]=maxsum(i);}
	int y=s[n];
	for(i=n+1;i<=m;i++)
    {
         if(s[i]>y)
		 {
		 y=s[i];
		 t=i;
	     }
    }
	cout<<y<<" "<<t<<endl;}	
}
int maxsum(int i)
{
	int sum=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		sum+=j;
	}
    return sum;
}
