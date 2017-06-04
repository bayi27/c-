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
	bool style; //假为平顶真为尖顶
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
			cout<<"尖顶\t";
		else
			cout<<"平顶\t";
	}
};
class Tele:public Base
{
protected:
	double weight;
	char color[30];
	bool style; //假为平黑白真为彩色
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
			cout<<"彩色\t";
		else
			cout<<"黑白\t";
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
			cout<<"三门\t";
		else
			cout<<"二门\t";
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
	cout<<"尺寸"<<setw(8)<<"单价"<<setw(8)<<"产地"<<setw(8)<<"库存量"<<"  "<<"所属货柜"<<setw(6)<<"布料"<<" 　"<<"样式类型\n";
	Shirt shirt(170,45,"衬衣",100,"衣柜","涤纶");
	shirt.out();cout<<endl;
	Trousers trousers(160,150,"裤子",400,"裤柜","牛仔");
	trousers.out();cout<<endl;
	Shoes shoes(42,200,"鞋子",500,"鞋柜","真皮");
	trousers.out();cout<<endl;
	Cap cap(5,10,"帽子",60,"帽盒","布料",3);
	cap.out();cout<<endl;
	cout<<endl;
	cout<<"尺寸"<<setw(8)<<"单价"<<setw(8)<<"产地"<<setw(8)<<"库存量"<<"  "<<"所属货柜"<<setw(13)<<"重量"<<setw(10)<<"样式"<<setw(8)<<"颜色"<<setw(10)<<"制冷方式\n";
	Tele tele(21,1500,"电视",60,"电视仓库",10,4,"红色");
	tele.out();cout<<endl;
	Refri refri(200,2000,"冰箱",25,"冰箱仓库",20,5,"白色","制冷类型");
	refri.out();cout<<endl;
	cout<<endl;
	cout<<"尺寸"<<setw(8)<<"单价"<<setw(8)<<"产地"<<setw(8)<<"库存量"<<"  "<<"所属货柜"<<setw(13)<<"木料"<<setw(8)<<"颜色"<<setw(8)<<"皮料\n";
	Wardrobe wardrobe(188,235,"立柜",70,"立柜仓库","红木","红色");
	wardrobe.out();cout<<endl;
	Closet closet(190,230,"壁橱",15,"壁橱仓库","实木","黑色");
	closet.out();cout<<endl;
	Sofa sofa(100,3000,"沙发",40,"沙发仓库","柏木","灰色","布");
	sofa.out();cout<<endl;
    system("pause");
	return 0;
}
