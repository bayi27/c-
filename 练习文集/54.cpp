#include <iostream>
using namespace std;
int P(int n,int x); 
int main()
{
	while(520)
	{
		int n,x;
		cout<<"ÇëÊäÈën,xµÄÖµ\n";
		cin>>n>>x;
	    cout<<P(n,x)<<endl;
	} 
	return 0;
}
int P(int n,int x)
{
	int y;
	if(n==0)
      y=1;
    else if(n==1)
      y=x;
	else 
	{
	     y=((2*n-1)*x*P(n-1,x)-(n-1)*P(n-2,x))/n;
	}
	return y;
} 