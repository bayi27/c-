#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
		int s[100];
		int n,i,x,max,min;
		double b;
		cout<<"请输入数组的n值:\n";
		cin>>n; 
		cout<<"请输入含有"<<n<<"个数的有序数组：\n";
		for(i=1;i<=n;i++)
		{
			cin>>s[i];
		}
		cout<<"请输入你要查找的x：\n";
		cin>>x;
	    max=s[n];
	    min=s[1];
	    if (s[n]==x)
	    cout<<s[n];
	    if(s[1]==x)
	    cout<<s[1];
	    else{
	    	int a=1,c=n;
	    	while(b!=x){
    		b=(max+min)/2;
    		if(b>x)
    		{
    			min=s[a++];
    		}
    		else
    		{
    			max=s[c--];
    		}}
    		cout<<b<<endl;
    	}
	} 
	return 0;
}