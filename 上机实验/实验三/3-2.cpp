#include<iostream>
using namespace std;
void find(int i,int n);
int main()
{
    int x,y;
    while(cin>>x>>y){
    find(x,y);
	cout<<endl;}
    return 0;
}
void find(int i,int n)
{
	int a=0;
	for(int j=i;a<n;j++)
    {
    	for(int m=2;m<j;m++)
    	{
    		if(j%m==0)
    		break;
    		if(m==j-1)
    		{
			  cout<<j<<" ";
			  a++;
		    }
		}
	}
}

