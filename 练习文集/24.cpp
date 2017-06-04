#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n,i,ch=1,sh=0;
		cout<<"ÇëÊäÈën£¨5<=n<=11£©Öµ\n";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			ch=i*ch;
			sh=ch+sh;
		}
		cout<<sh<<endl;
	} 
	return 0;
}