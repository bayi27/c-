#include <iostream>
#include <iomanip>
using namespace std;
class Base { //base类，为一个基类
	double price; //单价
	char place[20]; //产地
public:
	Base () { //无参构造函数
		price=0; strcpy(place,"");
	}
	Base (double pr, char* pl) { //二参构造函数
		price=pr; strcpy(place,pl);
	}
	void SetBase(double pr, char* pl) { //按所设数据生成对象
		price=pr; strcpy(place,pl);
	}
	void Display() { //显示base类对象的有关数据
		cout<<setw(10)<<price<<setw(10)<<place;
	}
	void Input() { //输入base类对象的有关数据
		cin>>price>>place;
	}
	double GetPrice() { return price; }
	char* GetPlace() { return place; }
};
class Shirt:public Base { //派生类shirt（衬衣）
	char material[20]; //增加"布料"数据
public:
	Shirt():Base() { //派生类构造函数，无参
		strcpy(material, "");
	}
	Shirt(double pr, char* pl, char* mat)
		:Base (pr,pl) { //派生类构造函数，负责其基类的初始化
		strcpy(material, mat);
	}
	void SetShirt(double pr, char* pl, char* mat){
		SetBase (pr,pl); //按所设数据生成派生类对象
		strcpy(material, mat);
	}
	void Display () {
		Base::Display(); //调用基类的display，显示"共性"数据
		cout<<setw(10)<<material; //显示"特性"数据
	}
	void Input(){
		Base::Input(); //调用基类的input，输入"共性"数据
		cin>>material;
	}
	char* GetMaterial() { return material; }
};
class Cap:public Shirt { //派生类cap（帽子），由shirt派生
	char style; //增加"样式"数据（p或j）
public:
	Cap():Shirt() { //无参构造函数
		style=' ';
	}
	Cap(double pr, char* pl, char* mat, char sty)
		:Shirt (pr, pl, mat) { //派生类构造函数，负责其基类的初始化
		style=sty;
	}
	void SetCap(double pr, char* pl, char* mat, char sty) {
		SetShirt (pr, pl, mat); //按所设数据生成派生类对象
		style=sty;
	}
	void Display () {
		Shirt::Display(); //调用基类shirt的display
		cout<<setw(10)<<style<<endl;
	}
	void Input(){
		Shirt::Input(); //调用基类的input，输入"共性"数据
		cin>>style;
	}
};
class Wardrobe:public Base { //派生类wardrobe（立柜）
	char material[20]; //增加"木料"数据
	char color[20]; //增加"颜色"数据
public:
	Wardrobe():Base() { //派生类构造函数，无参
		strcpy(material, "");
	}
	Wardrobe(double pr, char* pl, char* mat,char* colo)
		:Base (pr,pl) { //派生类构造函数，负责其基类的初始化
		strcpy(material,mat);
		strcpy(color,colo);
	}
	void SetWardrobe(double pr, char* pl, char* mat,char* colo){
		SetBase (pr,pl); //按所设数据生成派生类对象
		strcpy(material, mat);
		strcpy(color,colo);
	}
	void Display () {
		Base::Display(); //调用基类的display，显示"共性"数据
		cout<<setw(10)<<material<<setw(10)<<color; //显示"特性"数据
	}
	void Input(){
		Base::Input(); //调用基类的input，输入"共性"数据
		cin>>material>>color;
	}
	char* GetMaterial() { return material; }
	char* GetColor() { return color; }
};
const int MAXSIZE = 100;
class ShirtStorage { //衬衣仓库类shirt_storage
	int count; //库存量
	Shirt shelf[MAXSIZE]; //衬衣货架shelf，存放一批衬衣
public:
	ShirtStorage() { count=0; } //库存量初始化为0
	void Display () { //显示对象数据
		for (int i=0; i<count; i++) { //衬衣货架中现有count个数据
			shelf[i].Display();
			cout<<endl;
		}
	}
	void InSomething(int add_cnt){ //商品的进库（增加库存量count）
		cout<<add_cnt<<" * shirt data in: price/place/material =>";
		shelf[count++].Input(); //一次性输入该批同品种衬衣的有关数据
		for (int i=1; i<add_cnt; i++){ //"放到"衬衣货架shelf中（共add_cnt件）
			shelf[count]=shelf[count-1];
			count++;
		}
	}
	void OutSomething(int del_cnt){ //商品的出库（减少库存量count）
		count-=del_cnt; //意味着取走最后放入的del_cnt件衬衣
	}
	double TotalPrice(){ //货品总价格的计算
		double total=0;
		for (int i=0; i<count; i++) //衬衣货架shelf中各单价求和
			total+=shelf[i].GetPrice();
		return total;
	}
};
class CapStorage {  //帽子仓库类CapStorage
	int count; //库存量
	Cap shelf[MAXSIZE]; //帽子货架shelf
public:
	CapStorage() { count=0; } //库存量初始化为0
	void Display () { //显示对象数据
		for (int i=0; i<count; i++) { //衬衣货架中现有count个数据
			shelf[i].Display();
			cout<<endl;
		}
	}
	void InSomething(int add_cnt){ //商品的进库（增加库存量count）
		cout<<add_cnt<<" * cap data in: price/place/material =>";
		shelf[count++].Input(); //一次性输入该批同品种衬衣的有关数据
		for (int i=1; i<add_cnt; i++){ //"放到"衬衣货架shelf中（共add_cnt件）
			shelf[count]=shelf[count-1];
			count++;
		}
	}
	void OutSomething(int del_cnt){ //商品的出库（减少库存量count）
		count-=del_cnt; //意味着取走最后放入的del_cnt件衬衣
	}
	double TotalPrice(){ //货品总价格的计算
		double total=0;
		for (int i=0; i<count; i++) //衬衣货架shelf中各单价求和
			total+=shelf[i].GetPrice();
		return total;
	}
};
class WardrobeStorage { //立柜仓库类WardrobeStorage
	int count; //库存量
	Wardrobe shelf[MAXSIZE]; 
public:
	WardrobeStorage() { count=0; } 
	void Display () { 
		for (int i=0; i<count; i++) { 
			shelf[i].Display();
			cout<<endl;
		}
	}
	void InSomething(int add_cnt){ 
		cout<<add_cnt<<" * wardrobe data in: price/place/material =>";
		shelf[count++].Input(); 
		for (int i=1; i<add_cnt; i++){ 
			shelf[count]=shelf[count-1];
			count++;
		}
	}
	void OutSomething(int del_cnt){ //商品的出库（减少库存量count）
		count-=del_cnt; 
	}
	double TotalPrice(){ 
		double total=0;
		for (int i=0; i<count; i++) 
			total+=shelf[i].GetPrice();
		return total;
	}
};
void main() { //主函数，对所定义类进行使用
	ShirtStorage shiSto; //衬衣仓库类的对象shiSto
	shiSto.InSomething(5); //5件同品种衬衣进库
	shiSto.InSomething(3); //3件另一品种衬衣进库
	shiSto.Display(); //显示当前的衬衣库信息
	cout<<"shiSto.TotalPrice()="<<shiSto.TotalPrice()<<endl;
	//当前的衬衣库总价格
	shiSto.OutSomething(4); //4件衬衣出库
	shiSto.Display(); //显示当前的衬衣库信息
	cout<<"shiSto.TotalPrice()="<<shiSto.TotalPrice()<<endl;
	CapStorage  capSto; 
	capSto.InSomething(5); 
	capSto.InSomething(3);
	capSto.Display(); 
	cout<<"capSto.TotalPrice()="<<capSto.TotalPrice()<<endl;
	capSto.OutSomething(4); 
	capSto.Display(); 
	cout<<"capSto.TotalPrice()="<<capSto.TotalPrice()<<endl;
	WardrobeStorage  wardSto; 
	wardSto.InSomething(5); 
	wardSto.InSomething(3); 
	wardSto.Display(); 
	cout<<"wardSto.TotalPrice()="<<wardSto.TotalPrice()<<endl;
	wardSto.OutSomething(2); 
	wardSto.Display(); 
	cout<<"wardSto.TotalPrice()="<<wardSto.TotalPrice()<<endl;
}
