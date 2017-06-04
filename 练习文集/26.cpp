#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	while(1)
	{
		float n,j,k,sh,a=2,b=1,sum=0;
		cout<<"ÇëÊäÈëmÖµ\n";
		cin>>n;
		for(j=1;j<=n;j++)
		{
			sh=a/b;
			sum=sum+sh;
			k=a+b;
			b=a;
			a=k;
		}
		cout<<setiosflags(ios::fixed);
		cout<<setprecision(6);
		cout<<sum<<endl;
	} 
	return 0;
}