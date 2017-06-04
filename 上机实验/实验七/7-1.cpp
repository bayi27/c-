#include<iostream>
using namespace std;
const double PI=3.14159;
class point{
	double x,y;
public:
	point(double X=0,double Y=0)
	{
		x=X;
		y=Y;
	}
};
class circle:public point{
	double r;
public:
	circle(double X,double Y,double R):point(X,Y){
		r=R;
	}
	double area(){
		return PI*r*r;
	}
	double perimeter(){
		return 2*PI*r;
	}
};
class cylinder:public circle{
	double h;
public:
	cylinder(double X,double Y,double R,double H):circle(X,Y,R){
		h=H;
	}
	void area(){
		cout<<2*circle::area()+circle::perimeter()*h<<endl;
	}
	void volume(){
		cout<<h*circle::area()<<endl;
	}
};
int main(){
	double h,r,x,y;
	cout<<"请输入半径和坐标："<<endl;
	cin>>x>>y>>r;
	circle r1(x,y,r);
	cout<<"这个圆的面积：";
	cout<<r1.area()<<endl;
	cout<<"请输入圆柱的高：\n";
	cin>>h;
	cylinder r2(x,y,r,h);
	cout<<"这个圆柱的面积：";
	r2.area();
	cout<<"这个圆柱的体积：";
	r2.volume();
	return 0;
}