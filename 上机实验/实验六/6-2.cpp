#include <iostream> 
using namespace std;
class DateType { 
	int y,m,d; 
public:
	DateType(int y0=1, int m0=1, int d0=1)
	{
		y=y0;m=m0;d=d0; 
	} 
	void IncrementDay(); 
	bool Equal(DateType dt2);
	void PrintDate(); 
};
void DateType::IncrementDay()
{
    switch(m) 
	{  
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		{  
			if(d<31) 
			{d++;} 
			else 
			{d=1;m++;}  
		}break; 
	    case 2:  
	    {    
		if((y%4==0&&y%100!=0)||(y%400==0)) 
	        {    
			if(d<29)     
			  d++;   
			else     
			{      
				if(d=29)     
				{ 
                    d=1;   
					m++;
				}    
				else        
				cout<<"你输入的月份中日期超过范围！！！\n";}}  
				else{      
				if(d<28)     
				 d++;  
				else    
				{     
				if(d=28)      
				{ d=1;m++;}      
				else   
				cout<<"你输入的月份中日期超过范围！！！\n";
				} } }break; 
				case 12:  
				if(d<31)   
				 d++; 
				else 
				{d=1;m=1;y++;}break;
				case 4:  
				case 6:  
				case 9:   
				{     
					if(d<30)  
					   d++;    
					 else 
					 {d=1;m++;}break; 
				}    
				default:cout<<"月份输入错误！！！\n";break;
	}
}
bool DateType::Equal(DateType t2)
{
	DateType t;
	if(t.y==t2.y&&t.m==t2.m&&t.d==t2.d)
	return 1;
	else{
		return 0;
	}
}
void DateType::PrintDate()
{
	cout<<y<<":"<<m<<":"<<d<<endl;
}
int main()
{
	DateType t,t2(1999,12,31);
	if(t.Equal(t2))
		cout<<"t==t2"<<endl;
	else{
	cout<<"t!=t2"<<endl;
	t2.IncrementDay();
	cout<<"t2.IncrementDay=>";
	t2.PrintDate();
	}
	return 0; 
}
