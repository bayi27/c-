#include <iostream>
using namespace std;
int main()
{
    int n;
    for(n=8;;n+=10)
    {
      int m;
      for(m=n*4-n/10;m%10==0;m/=10);
      if (m==8)
      {
	     cout<<n<<endl;
         break;
      }
    }
    return 0;
} 