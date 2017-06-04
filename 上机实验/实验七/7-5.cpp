#include<iostream>
#include<iomanip>
using namespace std;
class Base
{
private:
	int size,amount;
	double price;
	char place[30],belong[30];
public:
	Base()
	{
		size = 0;
		price = 0;
		strcpy(place,"");
		amount = 0;
		strcpy(belong,"");
	}
	Base(int size,double price,char *place,int amount,char *belong)
	{
		this->size = size;
		this->price = price;
		strcpy(this->place,place);
		this->amount = amount;
		strcpy(this->belong,belong);
	}
	void set(int size,double price,char *place,int amount,char *belong)
	{
		this->size = size;
		this->price = price;
		strcpy(this->place,place);
		this->amount = 0;
		strcpy(this->belong,belong);
	}
	void out()
	{
		cout<<size<<"\t"<<price<<"\t"<<place<<"\t"<<amount<<"\t"<<belong<<"\t";
	}
};
class Shirt:public Base
{
private:
	char cloth[30];
public:
	Shirt():Base()
	{
		strcpy(cloth,"");
	}
	Shirt(int size,double price,char *place,int amount,char *belong,char *cloth):Base(size,price,place,amount,belong)
	{
		strcpy(this->cloth,cloth);
	}
	void set(int size,double price,char *place,int amount,char *belong,char *materal)
	{
		Base::set(size,price,place,amount,belong);
		strcpy(this->cloth,cloth);
	}
	void out()
	{
		Base::out();
		cout<<cloth<<"\t";
	}
};
class Trousers:public Base
{
private:
	char cloth[30];
public:
	Trousers():Base()
	{
		strcpy(cloth,"");
	}
	Trousers(int size,double price,char *place,int amount,char *belong,char *cloth):Base(size,price,place,amount,belong)
	{
		strcpy(this->cloth,cloth);
	}
	void set(int size,double price,char *place,int amount,char *belong,char *cloth)
	{
		Base::set(size,price,place,amount,belong);
		strcpy(this->cloth,cloth);
	}
	void out()
	{
		Base::out();
		cout<<cloth<<"\t";
	}
};
class Shoes:public Base
{
private:
	char cladding[30];
public:
	Shoes():Base()
	{
		strcpy(cladding,"");
	}
	Shoes(int size,double price,char *place,int amount,char *belong,char *cladding):Base(size,price,place,amount,belong)
	{
		strcpy(this->cladding,cladding);
	}
	void set(int size,double price,char *place,int amount,char *belong,char *cladding)
	{
		Base::set(size,price,place,amount,belong);
		strcpy(this->cladding,cladding);
	}
	void out()
	{
		Base::out();
		cout<<cladding<<"\t";
	}
};
class Cap:public Shirt
{
private:
	bool style; //��Ϊƽ����Ϊ�ⶥ
public:
	Cap():Shirt()
	{
		style = 0;
	}
	Cap(int size,double price,char *place,int amount,char *belong,char *cloth,bool style):Shirt(size,price,place,amount,belong,cloth)
	{
		this->style=style;
	}
	void set(int size,double price,char *place,int amount,char *belong,char *cloth,bool style)
	{
		Shirt::set(size,price,place,amount,belong,cloth);
		this->style=style;
	}
	void out()
	{
		Shirt::out();
		if(style)
			cout<<"�ⶥ\t";
		else
			cout<<"ƽ��\t";
	}
};
class Tele:public Base
{
protected:
	double weight;
	char color[30];
	bool style; //��Ϊƽ�ڰ���Ϊ��ɫ
public:
	Tele():Base()
	{
		weight = 0;
		style = 0;
		strcpy(color,"");
	}
	Tele(int size,double price,char *place,int amount,char *belong,double weight,bool style,char *color):Base(size,price,place,amount,belong)
	{
		this->weight=weight;
		this->style=style;
		strcpy(this->color,color);
	}
	void set(int size,double price,char *place,int amount,char *belong,double weight,bool style,char *color)
	{
		Base::set(size,price,place,amount,belong);
		this->weight = weight;
		strcpy(this->color,color);
		this->style=style;
	}
	void out()
	{
		Base::out();
		cout<<weight<<"\t";
		if(style)
			cout<<"��ɫ\t";
		else
			cout<<"�ڰ�\t";
		cout<<color<<"\t";
	}
};
class Refri:public Tele
{
private:
	char cold[30];
public:
	Refri():Tele()
	{
		strcpy(color,"");
	}
	Refri(int size,double price,char *place,int amount,char *belong,double weight,bool style,char *color,char *cold):Tele(size,price,place,amount,belong,weight,style,color)
	{
		strcpy(this->cold,cold);
	}
	void set(int size,double price,char *place,int amount,char *belong,double weight,bool style,char *color,char *cold)
	{
		Tele::set(size,price,place,amount,belong,weight,style,color);
		strcpy(this->cold,cold);
	}
	void out()
	{
		Base::out();
		cout<<weight<<"\t";
		if(style)
			cout<<"����\t";
		else
			cout<<"����\t";
		cout<<color<<"\t";
	}
};
class Wardrobe:public Base
{
private:
	char timber[30];
	char color[30];
public:
	Wardrobe():Base()
	{
		strcpy(timber,"");
		strcpy(color,"");
	}
	Wardrobe(int size,double price,char *place,int amount,char *belong,char *timber,char *color):Base(size,price,place,amount,belong)
	{
		strcpy(this->timber,timber);
		strcpy(this->color,color);
	}
	void set(int size,double price,char *place,int amount,char *belong,char *timber,char *color)
	{
		Base::set(size,price,place,amount,belong);
		strcpy(this->timber,timber);
		strcpy(this->color,color);
	}
	void out()
	{
		Base::out();
		cout<<timber<<"\t"<<color<<"\t";

	}
};
class Closet:public Base
{
private:
	char timber[30];
	char color[30];
public:
	Closet():Base()
	{
		strcpy(timber,"");
		strcpy(color,"");
	}
	Closet(int size,double price,char *place,int amount,char *belong,char *timber,char *color):Base(size,price,place,amount,belong)
	{
		strcpy(this->timber,timber);
		strcpy(this->color,color);
	}
	void set(int size,double price,char *place,int amount,char *belong,char *timber,char *color)
	{
		Base::set(size,price,place,amount,belong);
		strcpy(this->timber,timber);
		strcpy(this->color,color);
	}
	void out()
	{
		Base::out();
		cout<<timber<<"\t"<<color<<"\t";

	}
};
class Sofa:public Wardrobe
{
private:
	char cloth[30];
public:
	Sofa():Wardrobe()
	{
	}
	Sofa(int size,double price,char *place,int amount,char *belong,char *timber,char *color,char *cloth):Wardrobe(size,price,place,amount,belong,timber,color)
	{
		strcpy(this->cloth,cloth);
	}
	void set(int size,double price,char *place,int amount,char *belong,char *timber,char *color,char *cloth)
	{
		Wardrobe::set(size,price,place,amount,belong,timber,color);
		strcpy(this->cloth,cloth);
	}
	void out()
	{
		Wardrobe::out();
		cout<<cloth<<"\t";

	}
};
int main()
{
	cout<<"�ߴ�"<<setw(8)<<"����"<<setw(8)<<"����"<<setw(8)<<"�����"<<"  "<<"��������"<<setw(6)<<"����"<<" ��"<<"��ʽ����\n";
	Shirt shirt(170,45,"����",100,"�¹�","����");
	shirt.out();cout<<endl;
	Trousers trousers(160,150,"����",400,"���","ţ��");
	trousers.out();cout<<endl;
	Shoes shoes(42,200,"Ь��",500,"Ь��","��Ƥ");
	trousers.out();cout<<endl;
	Cap cap(5,10,"ñ��",60,"ñ��","����",3);
	cap.out();cout<<endl;
	cout<<endl;
	cout<<"�ߴ�"<<setw(8)<<"����"<<setw(8)<<"����"<<setw(8)<<"�����"<<"  "<<"��������"<<setw(13)<<"����"<<setw(10)<<"��ʽ"<<setw(8)<<"��ɫ"<<setw(10)<<"���䷽ʽ\n";
	Tele tele(21,1500,"����",60,"���Ӳֿ�",10,4,"��ɫ");
	tele.out();cout<<endl;
	Refri refri(200,2000,"����",25,"����ֿ�",20,5,"��ɫ","��������");
	refri.out();cout<<endl;
	cout<<endl;
	cout<<"�ߴ�"<<setw(8)<<"����"<<setw(8)<<"����"<<setw(8)<<"�����"<<"  "<<"��������"<<setw(13)<<"ľ��"<<setw(8)<<"��ɫ"<<setw(8)<<"Ƥ��\n";
	Wardrobe wardrobe(188,235,"����",70,"����ֿ�","��ľ","��ɫ");
	wardrobe.out();cout<<endl;
	Closet closet(190,230,"�ڳ�",15,"�ڳ��ֿ�","ʵľ","��ɫ");
	closet.out();cout<<endl;
	Sofa sofa(100,3000,"ɳ��",40,"ɳ���ֿ�","��ľ","��ɫ","��");
	sofa.out();cout<<endl;
    system("pause");
	return 0;
}
