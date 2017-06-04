#include <iostream.h>
using namespace std; 
int main()
{
	while(1)
	{
		int a,n,k,i=1,sh=0;
		cout<<"ÇëÊäÈëa,nµÄÖµ\n";
		cin>>a>>n;
		k=a;
		for (i=1;i<=n;i++)
		{
			sh=a+sh;
			a=a*10+k;
		} 
		cout<<sh<<endl;
	}
	return 0;
}
