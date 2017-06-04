#include <iostream>
using namespace std; 
int main(int argc, char *argv[])
{
	float a,b,c,p,s;
	cout<<"请输入三边"<<endl; 
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=p*(p-a)*(p-b)*(p-c);
	cout<<"三角形的周长和面积分别为"<<endl;
	cout<<p<<endl;
	cout<<s; 
	return 0;
}
