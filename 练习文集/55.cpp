#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
		int s[100];
		int n,i,x,max,min;
		double b;
		cout<<"�����������nֵ:\n";
		cin>>n; 
		cout<<"�����뺬��"<<n<<"�������������飺\n";
		for(i=1;i<=n;i++)
		{
			cin>>s[i];
		}
		cout<<"��������Ҫ���ҵ�x��\n";
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