#include <iostream> 
using namespace std;
class Complex{
	double real; 
	double imag; 
    public:
	Complex (double r=0,double i=0)
   {
	    real=r;
	    imag=i;
   }
	Complex Add(Complex&); 
	void OutCom();
};
void Complex::OutCom()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
Complex Complex::Add(Complex& c2){
	Complex c; 
	c.real=real+c2.real; 
	c.imag=imag+c2.imag; 
	return c;
}
int main()
{
	Complex c1(1,1),c2(1,-1);
	Complex c;
	c=c1.Add(c2);
	c.OutCom();
	return 0; 
}

