#include<iomanip>
#include<iostream>
using namespace std; 
int g=321;//ȫ�ֱ��� 
void display(int g, int x, int y)
{
    cout<<"g="<<setw(3)<<g<<", x=";
    cout<<setw(3)<<x<<", y="<<setw(3)<<y<<endl;
}
void f() 
{
    static int x=123; //��̬�ֲ�����.
    int y=123;//�Զ��ֲ�����������һ�κ�����ֵһ�� 
    g+=2; x+=2; y+=2;
    cout<<"in f : ";display(g,x,y);
}
int main() 
{
    int x=-66, y=555;
    cout<<"main1: "; display(g,x,y);
    y=y+8;
    cout<<"f������x��y�����¶��塣"<<endl;
	f();
	cout<<"����main�б�����"<<endl; 
    cout<<"main2: ";  
	display(g,x,y);
    g=g+5; 
	cout<<"��̬�ֲ�����ֻ�ܳ�ʼ��һ�Σ����ٴε���f����x���ٱ���ʼ����"<<endl; 
	f();
}

