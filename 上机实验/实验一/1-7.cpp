#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double x,y;
	cout<<"请输入正实数x：\n";
	cin>>x;
	cout<<"sin(x)="<<sin(x)<<endl;
	cout<<"tg(x)="<<tan(x)<<endl;
	cout<<"ln(x)="<<log(x)<<endl;
	cout<<"x的平方="<<pow(x,x)<<endl;
	cout<<"x的平方根="<<sqrt(x)<<endl;
    cout<<"x的10次方="<<pow(x,10.0)<<endl;
    cout<<"x的10次方根="<<pow(x,1/10)<<endl;
    cout<<"x的倒数="<<1/x<<endl;
    cout<<"e的x次方="<<exp(x)<<endl;
    y=abs(pow(x,5.0)+log10(pow(x,x)+1)-pow(2.0,x)-13);
    cout<<y<<endl;
	return 0;
}