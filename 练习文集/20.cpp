#include <iostream.h>
#include <cmath>
using namespace std; 
int main()
{
	while(1)
	{
		cout<<"ÇëÊäÈën(0<n<10)\n";
		float n,sum=1,k=1;
		cin>>n;
		while(sum<=n) 
		{
			k++;
			sum+=(1/k);
		}
		cout<<k<<endl;	
	}
	return 0;
}
