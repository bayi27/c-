#include<iostream>
using namespace std;
class integer{
public:
	void set();
	void add();
	void del();
	friend void inter(integer&a,integer&b);
	void decide();
	void show();
private:
	int num[50];
	int k;
};
void integer::set()
{
	int p;
	cout<<"请输入整数集合的元素个数：";
	cin>>k;
	cout<<"请输入集合的元素：";
	for(p=0;p<k;p++)
	 cin>>num[p];
}
void integer::add()
{
	char d;
	do
	{
	int z,q;
	bool leap=true;
	cout<<"请输入要加入的元素：";
	cin>>z;
	for(q=0;q<k;q++)
	if(num[q]==z)
	{
		leap=false;
		break;
	}   
	if(leap)
	{   
		num[k]=z;
		cout<<"添加成功"<<endl;
		cout<<"继续输入Y/y,否则输入N/n:";
		k++;
		cin>>d;
	}
	if(!leap)
	{
		cout<<"继续输入Y/y,否则输入N/n:";
		cin>>d;
	}
	}while(d=='y'||d=='Y');
}  
void integer::del()
{  
	int m;  
	char x;  
	do
	{    
		cout<<"请输入要置空的元素的序号：";
		cin>>m;
		for(;m<k;m++)
			num[m-1]=num[m];
		if(m<k)
		{     
			k--;     
			cout<<"置空成功"<<endl;
		} 
		else{
			cout<<"无此元素"<<endl;
		}
		cout<<"继续输入Y/y,否则输入N/n:";
		cin>>x;
	}while(x=='y'||x=='Y');
}  
void integer::decide()
{  
	int n,f;
	char y;  
	do
	{   
		bool flag=false;
		cout<<"输入想要找的元素："; 
        cin>>n;
        for(f=0;f<k;f++) 
	     if(num[f]==n)
	     {     
		  flag=true; 
		  cout<<"在集合里"<<endl;
		  break;
	     }    
	     if(!flag){
		  cout<<"不在集合中"<<endl;
		 }
	    cout<<"继续输入Y/y,否则输入N/n:";
	    cin>>y;
	}while(y=='y'||y=='Y');
}
void integer::show()
{  
	int l,loop=0;
	for(l=0;l<k;l++)
	{ 
		cout<<num[l]<<" ";
		loop++;
		if(loop==5)
			cout<<endl;
	}    cout<<endl;
}
void inter(integer &a,integer &b)
{ 
	int i,j,e=0;  
	cout<<"集合交集："<<endl;
	for(i=0;i<a.k;i++)   
		for(j=0;j<b.k;j++)
			if(a.num[i]==b.num[j])
			{     
				cout<<b.num[j]<<" "; 
				e++;     
				if(e==5)
				cout<<endl;
			}  
			cout<<endl;
}  
int main() 
{  
 integer t1,t2;
 cout<<"集合一"<<endl;
 t1.set();  
 cout<<"集合二"<<endl; 
 t2.set();  
 cout<<"在集合一中添加元素："<<endl;  
 t1.add();  
 cout<<"在集合二中添加元素："<<endl; 
 t2.add();   
 cout<<"在集合一中置空元素："<<endl;   
 t1.del(); 
 cout<<"在集合二中置空元素："<<endl;
 t2.del();   
 inter(t1,t2);
 cout<<"判断此元素是否在集合一中："<<endl;
 t1.decide();  
 cout<<"判断此元素是否在集合二中："<<endl;
 t2.decide();  
 cout<<"输出集合一："<<endl;  
 t1.show();     
 cout<<"输出集合二："<<endl; 
 t2.show();   
 return 0; 
} 
