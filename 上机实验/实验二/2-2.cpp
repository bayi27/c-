#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
	double a,b,c,d,y1,y2,y3,y4;
	cout<<"请依次输入购买四种商品的数量：\n";
	cin>>a>>b>>c>>d;
	y1=2.75*a;
	y2=12.5*b;
	y3=26.8*c;
	cout<<y1<<" "<<y2<<" "<<y3<<" ";
	if(d<=3)
	{
		
		y4=512*d;
		cout<<y4<<endl;
		cout<<y1+y2+y3+y4<<endl;
	}
	else
	{
		if(3<d<=8)
		{
			y4=512*d*0.9;
		    cout<<y4<<endl;
		    cout<<y1+y2+y3+y4<<endl;
		}
		else
		{
			y4=512*d*0.85;
			cout<<y4<<endl;
		    cout<<y1+y2+y3+y4<<endl;
		}
	}} 
	return 0;
}