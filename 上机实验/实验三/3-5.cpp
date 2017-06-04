#include<iomanip>
#include<iostream>
using namespace std; 
int g=321;//全局变量 
void display(int g, int x, int y)
{
    cout<<"g="<<setw(3)<<g<<", x=";
    cout<<setw(3)<<x<<", y="<<setw(3)<<y<<endl;
}
void f() 
{
    static int x=123; //静态局部变量.
    int y=123;//自动局部变量，调用一次函数赋值一次 
    g+=2; x+=2; y+=2;
    cout<<"in f : ";display(g,x,y);
}
int main() 
{
    int x=-66, y=555;
    cout<<"main1: "; display(g,x,y);
    y=y+8;
    cout<<"f函数中x，y被重新定义。"<<endl;
	f();
	cout<<"调用main中变量。"<<endl; 
    cout<<"main2: ";  
	display(g,x,y);
    g=g+5; 
	cout<<"静态局部变量只能初始化一次，即再次调用f函数x不再被初始化。"<<endl; 
	f();
}

