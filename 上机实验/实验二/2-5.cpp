#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,a,b,k,newx=0;
	double n=1;
	cin>>x>>k;
	for(x;x>0;n++){
		if(k==n){
			x=x/10;
			b=x%10;
		}
		else{
			b=x%10;
		}
		x=x/10;
		a=b*pow(10,n-1);
		newx+=a;
	}
	cout<<newx;
	system("pause");
	return 0;
}
