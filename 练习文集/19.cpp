#include <iostream.h>
#include<cmath>
using namespace std; 
int main()
{
	while (1)
	{int i,x,b;
	cout<<"������һ��������"<<endl;
	cin>>x;
    b=sqrt(double(x));
    if(x==1)
    {
      cout<<"NO\n";
    }
    else
        {for(i=2;i<=b;i++)//........
	    if(x%i==0)
	      break;
	      if(i>=b+1)
	           cout<<"Yes\n";
	      else
               cout<<"NO\n";}
	    }
	return 0;
}
