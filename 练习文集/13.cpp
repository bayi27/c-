#include <iostream.h>                      
using namespace std;                       
int main()                                 
{   
    while(1)                                       
	{int a,b,c,d,e;                              
	cout<<"请输入你的整数(小于1000）"<<endl;  
	cin>>a;                                   
	 if(100<=a)
	 {
	   b=int(a/100);
	   c=int((a%100)/10);
	   d=int(a%10);
	   e=d*100+c*10+b;
	   cout<<e<<endl;
	 }
	 else
	 {
	   b=int(a/10);
	   c=a%10;
	   e=c*10+b;
	   cout<<e<<endl;
	 }}                                                                                  
	return 0;                                 
}                                          
                                           