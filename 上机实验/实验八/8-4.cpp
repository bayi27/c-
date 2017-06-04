#include<iostream> 
#include<string> 
#include<fstream> 
using namespace std;
class Book
{  
private:
	long int num;
	char bookname[40];      
	char publicname[40];     
	char name[20];       
public:
	Book()
	{
		num=0;
		bookname[0]=0;
		publicname[0]=0;
		name[0]=0;
	}
	char *Getbookname(void)
	{
		return bookname;
	}
	long Getnum(void)
	{
		return num;
	}
	void Setdata(long,char *,char *,char *);
	void Show(void );
	Book(long,char *,char *,char *);
};
void  Book::Setdata(long nu ,char *bn,char *p,char *n)
{
	num=nu;
	strcpy(bookname,bn);
	strcpy(publicname,p);
	strcpy(name,n);
}
void  Book::Show(void)
{
	cout<<"书号:"<<num<<"\n"<<"书名:"<<bookname<<"\n";
	cout<<"出版社:"<<publicname<<"\n"<<"作者:"<<name<<"\n";
	cout<<"***************************\n";
}
Book::Book(long nu,char * bp,char *p,char *n)
{
	Setdata(nu,bp,p,n);
}
void main(void)
{
	Book  b1,b2;
	long  nu;
	char bn[40];
	char pn[40];     
	char na[20];        
	ifstream  file1; 
    ofstream  file3;
	char flag='y';
	while( flag=='y'||flag=='Y') 
	{
		cout<<"1.按书名查找书"<<endl;
		cout<<"2.加入新书"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"输入选择:\n";
		cout<<"***************************\n";
		int f;
		cin>>f;
		switch(f)
		{
		case 1:
			cout<<"输入要查找的书名：";
			cin>>bn;
			file1.open("book.dat",ios::in|ios::binary);
			while(!file1.eof())
			{
				int n;
				file1.read((char *)&b1,sizeof(Book));
				n=file1.gcount();
				if(n==sizeof(Book))
				{
					if(strcmp(b1.Getbookname(),bn)==0)
						b1.Show();
				}
			}
			file1.close();
			break;
		case 2:
			cout<<"输入书号:";
			cin>>nu;
			cout<<"输入书名:";
			cin>>bn;
			cout<<"输入出版社:";
			cin>>pn;
			cout<<"输入作者:";
			cin>>na;
			b1.Setdata(nu,bn,pn,na);
			file3.open("book.dat",ios::app|ios::binary);
			file3.write((char*)&b1,sizeof(b1));
			file3.close();
			break;
		default:
			flag='n';
		}
	}
}