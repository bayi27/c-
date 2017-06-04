#include <iostream.h>
using namespace std; 
int main()
{
	while(1)
	{
	float x,y;
	cout<<"请输入所用度数（kwh)"<<endl;
	cin>>x;
	 if(x<=50)
	 {
	 	cout<<"y="<<x*0.5<<endl;
	 }
	 else 
	 {if(50<x&&x<100)
	 {
	    cout<<"y="<<(x-50)*0.7+50*0.5<<endl;
	 }
	 else
	 {if(x>=100)
	 {
	    cout<<"y="<<50*0.5+50*0.7+(x-100)*1<<endl;
	 }}}} 
	return 0;
}