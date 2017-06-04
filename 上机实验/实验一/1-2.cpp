#include <iostream>
using namespace std;
int main()
{
	int i=32,j=1,k=3;
	cout<<!(!(true||false))<<endl;
    cout<<((true&&false)&&!(true||false))<<endl; 
    cout<<(i&&j&&k-3)<<endl;
	cout<<(34-i||k)<<endl; 
    cout<<(j!=k&&i!=k)<<endl;
	cout<<!!!(i=6)<<endl; 
	cout<<((5>3)&&(3>1))<<endl; 
	cout<<(5>3&&3>1)<<endl; 
	cout<<(5>3>1)<<endl; 
	cout<<(!i||(j-k)&&i&&!(k-3||i*k))<<endl;  
	return 0;
}