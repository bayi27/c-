#include<iostream>
using namespace std;
void transform(int dec, int x);
int main()
{
	int dec,x;
	while(cin>>dec>>x)
	{
		transform(dec,x);
	}
} 
void transform(int dec, int x)
{
	char a[100];
	int b,c;
	int i=0;
	do{
	char s[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    b=dec%x;
    if(b>=10)
    a[i]=s[b-10];
    else{
    	a[i]=b+'0';
	}
    dec=(dec-b)/x;
	i++;   
	}while(dec!=0);
	for(c=i-1;c>=0;c--)
	cout<<a[c];
	cout<<endl;
} 
