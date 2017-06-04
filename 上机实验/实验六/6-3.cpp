#include <iostream> 
using namespace std;
class student{ 
	unsigned long reg_num; 
	char name[30]; 
	float math, eng, comp; 
public: 
	float sum(); 
	void average(); 
	void display();
	void setData() ;
};
float student::sum()
{
 return (math+eng+comp);
}
void student::average()
{
 cout<<(math+eng+comp)/3<<endl;
}
void student::display()
{
 cout<<reg_num<<" "<<name<<" "
	 <<math<<" "<<eng<<" "<<comp<<endl;
}
void student::setData()
{
 cin>>reg_num>>name>>math>>eng>>comp;
}
int main()
{
 int i,num;
 cout<<"请输入学生总人数:";
 cin>>num;
 student stu[500];
 cout<<"请输入学生信息："<<endl;
 for(i=0;i<num;i++)
 {
  stu[i].setData();
 }
 int max=0,j;
 for(i=0;i<num;i++)
 {
  cout<<stu[i].sum()<<endl;
 }
 for(i=0;i<num;i++)
 {
  stu[i].average();
 }
 for(i=0;i<num;i++)
 {
  if(stu[i].sum()>max)
  {
   max=stu[i].sum();
   j=i;
  }
 }
 cout<<"全班学生总成绩最高的同学"<<j<<endl;
 stu[j].display();
 system("pause");
 return 0;
}