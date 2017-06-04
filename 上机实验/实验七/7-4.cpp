#include<iostream>
using namespace std;
class DateType{
	int y,m,d;
public:
	DateType(int y0=2000,int m0=1,int d0=1)
	{
		y=y0;
		m=m0;
		d=d0;
	}
	void setDate(int y0=2000,int m0=1,int d0=1)
	{
		y=y0;
		m=m0;
		d=d0;
	}
	void IncrementDay() 
	{
		d++;
		change();
	}
	void change()
	{
		do{
			if(d>dayOfMonth(d))
			{
				m++;
				d=d-dayOfMonth(d);
			}
			if(m>12)
			{
				y++;
				m=1;
			}
		}while(d>dayOfMonth(d));
	}
	void PrintDate()
	{
		cout<<y<<"-"<<m<<"-"<<d<<" ";
	}
	int dayOfMonth(int m)	 
{
	int day;
	switch (m)
	{
	case 1:
    case 3:
	case 5:
	case 7:
	case 8:
    case 10:
		day=31;
		break;
	case 2:
		if (y%4==0)
			day=28;
		else
			day=29;
		break;
    case 4:
    case 6:
	case 9:
	case 11:
		day=30;
		break;
	default:
		day=31;
		break;
	}
	return day;
}
	bool temp(DateType p)
	{
		bool temp1=true;
		if(y!=p.y)
			temp1=false;
		if(m!=p.m)
			temp1=false;
		if(y!=p.y)
			temp1=false;
		return temp1;
	}
	friend class TimeType;
};
class TimeType
{
private:
	int h,m,s;
	int dayup;
public:
	int getDayUp()
	{
		return dayup;
	}
	void downDayUp()
	{
		dayup--;
	}
	TimeType(int hour=0,int minute=0,int second=0)
	{
		dayup=0;
		h=hour;
		m=minute;
		s=second;
	}
	void setTime(int hour=0,int minute=0,int second=0)
	{
		dayup=0;
		h=hour;
		m=minute;
		s=second;
	}
	void change()
	{
		while(s>59)
		{
			s=s-60;
			m++;
			while(m>59)
			{
				m=m-60;
				h++;
				while(h>23)
				{
					h=h-24;
					dayup++;
				}
			}
		}
	}
	void IncrementSecond(int s) 
	{
		this->s+=s;
		change();
	}
	void PrintTime()
	{
		cout<<h<<":"<<m<<":"<<s<<endl;
	}
};
class DateTimeType {  
	DateType date; 
	TimeType time; 
public:
	DateTimeType(int y0=1, int m0=1, int d0=1, int hr0=0, int mi0=0, int se0=0)
	{date.setDate(y0,m0,d0);time.setTime(hr0,mi0,se0);}
	DateType& GetDate(){ return date; } 
	TimeType& GetTime(){ return time; }
	void IncrementSecond(int s)
	{
		time.IncrementSecond(30);
		time.change();
		while(time.getDayUp()!=0)
		{
			date.IncrementDay();
			time.downDayUp();
		}
		date.change();
	}
	void PrintDateTime()
	{
		date.PrintDate();
		time.PrintTime();
	}
};
void main() {
	DateTimeType dttm1(1999,12,31,23,59,59), dttm2;
	(dttm1.GetDate()).PrintDate(); //调用对象成员所属类的公有成员函数
	cout<<endl;
	dttm1.PrintDateTime(); //调用本派生类的成员函数PrintDateTime
	dttm2.PrintDateTime();
	dttm1.IncrementSecond(30) ; //调用本派生类成员函数
	dttm1.PrintDateTime();
}
