#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double x,y;
	cout<<"��������ʵ��x��\n";
	cin>>x;
	cout<<"sin(x)="<<sin(x)<<endl;
	cout<<"tg(x)="<<tan(x)<<endl;
	cout<<"ln(x)="<<log(x)<<endl;
	cout<<"x��ƽ��="<<pow(x,x)<<endl;
	cout<<"x��ƽ����="<<sqrt(x)<<endl;
    cout<<"x��10�η�="<<pow(x,10.0)<<endl;
    cout<<"x��10�η���="<<pow(x,1/10)<<endl;
    cout<<"x�ĵ���="<<1/x<<endl;
    cout<<"e��x�η�="<<exp(x)<<endl;
    y=abs(pow(x,5.0)+log10(pow(x,x)+1)-pow(2.0,x)-13);
    cout<<y<<endl;
	return 0;
}