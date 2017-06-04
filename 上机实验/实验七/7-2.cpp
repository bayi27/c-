#include <iostream>
#include <iomanip>
using namespace std;
class Base { //base�࣬Ϊһ������
	double price; //����
	char place[20]; //����
public:
	Base () { //�޲ι��캯��
		price=0; strcpy(place,"");
	}
	Base (double pr, char* pl) { //���ι��캯��
		price=pr; strcpy(place,pl);
	}
	void SetBase(double pr, char* pl) { //�������������ɶ���
		price=pr; strcpy(place,pl);
	}
	void Display() { //��ʾbase�������й�����
		cout<<setw(10)<<price<<setw(10)<<place;
	}
	void Input() { //����base�������й�����
		cin>>price>>place;
	}
	double GetPrice() { return price; }
	char* GetPlace() { return place; }
};
class Shirt:public Base { //������shirt�����£�
	char material[20]; //����"����"����
public:
	Shirt():Base() { //�����๹�캯�����޲�
		strcpy(material, "");
	}
	Shirt(double pr, char* pl, char* mat)
		:Base (pr,pl) { //�����๹�캯�������������ĳ�ʼ��
		strcpy(material, mat);
	}
	void SetShirt(double pr, char* pl, char* mat){
		SetBase (pr,pl); //�����������������������
		strcpy(material, mat);
	}
	void Display () {
		Base::Display(); //���û����display����ʾ"����"����
		cout<<setw(10)<<material; //��ʾ"����"����
	}
	void Input(){
		Base::Input(); //���û����input������"����"����
		cin>>material;
	}
	char* GetMaterial() { return material; }
};
class Cap:public Shirt { //������cap��ñ�ӣ�����shirt����
	char style; //����"��ʽ"���ݣ�p��j��
public:
	Cap():Shirt() { //�޲ι��캯��
		style=' ';
	}
	Cap(double pr, char* pl, char* mat, char sty)
		:Shirt (pr, pl, mat) { //�����๹�캯�������������ĳ�ʼ��
		style=sty;
	}
	void SetCap(double pr, char* pl, char* mat, char sty) {
		SetShirt (pr, pl, mat); //�����������������������
		style=sty;
	}
	void Display () {
		Shirt::Display(); //���û���shirt��display
		cout<<setw(10)<<style<<endl;
	}
	void Input(){
		Shirt::Input(); //���û����input������"����"����
		cin>>style;
	}
};
class Wardrobe:public Base { //������wardrobe������
	char material[20]; //����"ľ��"����
	char color[20]; //����"��ɫ"����
public:
	Wardrobe():Base() { //�����๹�캯�����޲�
		strcpy(material, "");
	}
	Wardrobe(double pr, char* pl, char* mat,char* colo)
		:Base (pr,pl) { //�����๹�캯�������������ĳ�ʼ��
		strcpy(material,mat);
		strcpy(color,colo);
	}
	void SetWardrobe(double pr, char* pl, char* mat,char* colo){
		SetBase (pr,pl); //�����������������������
		strcpy(material, mat);
		strcpy(color,colo);
	}
	void Display () {
		Base::Display(); //���û����display����ʾ"����"����
		cout<<setw(10)<<material<<setw(10)<<color; //��ʾ"����"����
	}
	void Input(){
		Base::Input(); //���û����input������"����"����
		cin>>material>>color;
	}
	char* GetMaterial() { return material; }
	char* GetColor() { return color; }
};
const int MAXSIZE = 100;
class ShirtStorage { //���²ֿ���shirt_storage
	int count; //�����
	Shirt shelf[MAXSIZE]; //���»���shelf�����һ������
public:
	ShirtStorage() { count=0; } //�������ʼ��Ϊ0
	void Display () { //��ʾ��������
		for (int i=0; i<count; i++) { //���»���������count������
			shelf[i].Display();
			cout<<endl;
		}
	}
	void InSomething(int add_cnt){ //��Ʒ�Ľ��⣨���ӿ����count��
		cout<<add_cnt<<" * shirt data in: price/place/material =>";
		shelf[count++].Input(); //һ�����������ͬƷ�ֳ��µ��й�����
		for (int i=1; i<add_cnt; i++){ //"�ŵ�"���»���shelf�У���add_cnt����
			shelf[count]=shelf[count-1];
			count++;
		}
	}
	void OutSomething(int del_cnt){ //��Ʒ�ĳ��⣨���ٿ����count��
		count-=del_cnt; //��ζ��ȡ���������del_cnt������
	}
	double TotalPrice(){ //��Ʒ�ܼ۸�ļ���
		double total=0;
		for (int i=0; i<count; i++) //���»���shelf�и��������
			total+=shelf[i].GetPrice();
		return total;
	}
};
class CapStorage {  //ñ�Ӳֿ���CapStorage
	int count; //�����
	Cap shelf[MAXSIZE]; //ñ�ӻ���shelf
public:
	CapStorage() { count=0; } //�������ʼ��Ϊ0
	void Display () { //��ʾ��������
		for (int i=0; i<count; i++) { //���»���������count������
			shelf[i].Display();
			cout<<endl;
		}
	}
	void InSomething(int add_cnt){ //��Ʒ�Ľ��⣨���ӿ����count��
		cout<<add_cnt<<" * cap data in: price/place/material =>";
		shelf[count++].Input(); //һ�����������ͬƷ�ֳ��µ��й�����
		for (int i=1; i<add_cnt; i++){ //"�ŵ�"���»���shelf�У���add_cnt����
			shelf[count]=shelf[count-1];
			count++;
		}
	}
	void OutSomething(int del_cnt){ //��Ʒ�ĳ��⣨���ٿ����count��
		count-=del_cnt; //��ζ��ȡ���������del_cnt������
	}
	double TotalPrice(){ //��Ʒ�ܼ۸�ļ���
		double total=0;
		for (int i=0; i<count; i++) //���»���shelf�и��������
			total+=shelf[i].GetPrice();
		return total;
	}
};
class WardrobeStorage { //����ֿ���WardrobeStorage
	int count; //�����
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
	void OutSomething(int del_cnt){ //��Ʒ�ĳ��⣨���ٿ����count��
		count-=del_cnt; 
	}
	double TotalPrice(){ 
		double total=0;
		for (int i=0; i<count; i++) 
			total+=shelf[i].GetPrice();
		return total;
	}
};
void main() { //���������������������ʹ��
	ShirtStorage shiSto; //���²ֿ���Ķ���shiSto
	shiSto.InSomething(5); //5��ͬƷ�ֳ��½���
	shiSto.InSomething(3); //3����һƷ�ֳ��½���
	shiSto.Display(); //��ʾ��ǰ�ĳ��¿���Ϣ
	cout<<"shiSto.TotalPrice()="<<shiSto.TotalPrice()<<endl;
	//��ǰ�ĳ��¿��ܼ۸�
	shiSto.OutSomething(4); //4�����³���
	shiSto.Display(); //��ʾ��ǰ�ĳ��¿���Ϣ
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
