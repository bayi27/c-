#include <iostream> 
using namespace std;
const float pi=(float)3.1415926;
const float fenceprice=35.;
const float concreteprice=20.;
class circle  {   
public:    
	circle(float r);
	float circumference();
	float area();
private:    
	float radius;  
};   
circle::circle(float r)
{
	radius=r;
}  
float circle::circumference() 
{
	return(2*pi*radius);
}   
float circle::area()
{    
	return pi*radius*radius;
}   
int main()  {    
	float radius;   
	float fencecost,concretecost;
	cout<<"请输入游泳池的半径：";
	cin>>radius;    
	circle pool(radius);
	circle poolrim(radius+3);
	fencecost=poolrim.circumference()*fenceprice;
	cout<<"栅栏的造价为："<<fencecost<<endl;
	concretecost=(poolrim.area()-pool.area())*concreteprice;
	cout<<"过道的造价为："<<concretecost<<endl;
	system("pause");
	return 0; 
}