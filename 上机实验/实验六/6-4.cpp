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
	cout<<"��������Ӿ�صİ뾶��";
	cin>>radius;    
	circle pool(radius);
	circle poolrim(radius+3);
	fencecost=poolrim.circumference()*fenceprice;
	cout<<"դ�������Ϊ��"<<fencecost<<endl;
	concretecost=(poolrim.area()-pool.area())*concreteprice;
	cout<<"���������Ϊ��"<<concretecost<<endl;
	system("pause");
	return 0; 
}