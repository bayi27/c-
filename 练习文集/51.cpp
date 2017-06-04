#include <iostream>
#include <string>
#include <sstream>
using namespace std;
void zhuanhuan(string a);
int main()
{
	while(520)
	{
	string a;
    cout<<"ÇëÊäÈë×Ö·û´®£º\n";
	cin>>a;
	zhuanhuan(a);
	}
	return 0;
}
void zhuanhuan(string a)
{
	long int b=0;
	stringstream abc;
	abc<<a;
	abc>>b;
	cout<<b<<endl;
}