#include <iostream>
using namespace std; 
int main(int argc, char *argv[])
{
	float a,b,c,p,s;
	cout<<"����������"<<endl; 
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=p*(p-a)*(p-b)*(p-c);
	cout<<"�����ε��ܳ�������ֱ�Ϊ"<<endl;
	cout<<p<<endl;
	cout<<s; 
	return 0;
}
