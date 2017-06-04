#include<iostream>
using namespace std;
bool f(long x);
int main()
{
	while(1){
	long x;
	cin>>x;
    if(f(x))
    {
         cout<<"true"<<endl; 
	}
	if(!f(x)){
	     cout<<"false"<<endl;
	}
	}
 }
bool f(long x)
{
	long t,a;
	do{
		t=x%10;
		x=x/10;
		if(t%2==0)
		{
			a=1;
		}
		else{
			a=0;
		}
	}while(a&&x!=0);
    return a;
 } 
