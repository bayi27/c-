#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=16;i<=286;i++)
	{
		if(i%3==1&&i%10==6)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}