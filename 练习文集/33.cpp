#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		int j,n,i,a1=0,a2=1,a3=1;
		cout<<"ÇëÊäÈënÖµ\n";
		cin>>n;
		switch(n)
		{
			case 1:cout<<"0\n";
			break; 
			case 2:cout<<"0,1\n";
			break;
			case 3:cout<<"0,1,1\n";
			break;	
			default:
			    cout<<"0,1,1,";
			    for(i=3;i<n;i++)
			    {
			    	j=a1+a2+a3;
			    	a1=a2,a2=a3,a3=j;
			    	cout<<j<<",";
			    }
		}
		cout<<endl;
	}
	return 0;
}