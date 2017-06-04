#include<iostream>
#include<cmath>
using namespace std;
bool symm(long n); 
int main()
{
    int x;
    while(cin>>x)
    {
	if(symm(x)) 
	cout<<"true"<<endl;
	else if(!symm(x)){
		cout<<"false"<<endl;
	}
	}
}
bool symm(long n)
{
	int s[100];
	int a,b=0;
	a=n;
	for(int i=0;n!=0;i++)
	{
		s[i]=n%10;
		n=n/10;
		b++;
	}
	int sum=0;
	for(int j=0;j<b;j++)
	{
		sum+=s[j]*pow(10,b-1-j);
	}
	if(a==sum)
	return 1;
	else  return 0;
}
