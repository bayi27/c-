#include <iostream>
using namespace std;
int main()
{
		int n,a,b,c;
		cout<<"水仙花数是\n";
        for(n=100;n<1000;n++)
        {
        	a=int(n/100);
        	b=int(n/10)-a*10;
        	c=n%10;
        	if(n==a*a*a+b*b*b+c*c*c)
        	{
			    cout<<n<<endl;   
        	}
        }
	return 0;
}