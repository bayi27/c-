#include<iostream>
#include<string>
using namespace std;
class Person { 
	char name[30]; 
	char sex; 
	int age; 
public:
	Person (char * na, char sx, int ag){
		strcpy(name,na);
		sex=sx;
		age=ag;
	}
	void Display(){
		cout<<name<<" "<<sex<<" "<<age<<endl;
	}
};
class Teacher:public Person { 
	char post[30],course[30]; 
public:
     Teacher (char * na, char sx, int ag,char *po,char *co):Person(na,sx,ag){
		 strcpy(post,po);
		 strcpy(course,co);
	 }
	 void Display(){
		 Person::Display();
		 cout<<post<<" "<<course<<endl;
	 }
};
class Student:public Person { 
	int Reg_Number; 
	char department[30]; 
public:
	Student(char * na, char sx, int ag,int num,char *depar):Person(na,sx,ag){
		 strcpy(department,depar);
		 Reg_Number=num;
	 }
	void Display(){
		 Person::Display();
		 cout<<Reg_Number<<" "<<department<<endl;
	 }
};
class GraduateStudent:public Student{
	char advisor[30];
public:
	GraduateStudent(char * na, char sx, int ag,int num,char *depar,char *adv):Student(na,sx,ag,num,depar){
		 strcpy(advisor,adv);
	 }
	void Display(){
		 Student::Display();
		 cout<<advisor<<endl;
	 }
};
void main() {
	Person per1("sun", 'M', 42);
	Student stu1("guo", 'F', 22, 1001, "comp");
	Teacher teach1("fang", 'M', 38, "professor", "english");
	GraduateStudent gStu("wu", 'M', 25, 1021, "comp", "wei");
	cout<<"== per1.Display() => name,age,sex"<<endl;
	per1.Display();
	cout<<"== stu1.Display() => name,age,sex,Reg_Number,department"<<endl;
	stu1.Display();
	cout<<"== teach1.Display() => name,age,sex,post,course"<<endl;
	teach1.Display();
	cout<<"== gStu.Display() => name,age,sex,";
	cout<<"Reg_Number,department,advisor"<<endl;
	gStu.Display();
	system("pause");
}

