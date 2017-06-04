#include <iostream>
using namespace std;
int P(int n); 
int main()
{
	while(520)
	{
		int n,x;
		cout<<"ÇëÊäÈën,xµÄÖµ\n";
		cin>>n>>x;
	    cout<<P(n)<<endl;
	} 
	return 0;
}
int P(int n)
{
	int x,y;
	if(n==0)
      y=1;
    else if(n==1)
      y=x;
	else 
	{
	     y=((2*n-1)*x*P(n-1)-(n-1)*P(n-2))/n;
	}
	return y;
} 