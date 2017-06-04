#include <iostream> 
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void xueshengduan();
void guanliduan();
void xueshengdenglu();
string strid;
class student 
{ 
   public:
   char name[10]; 
   char passwd[10];
   char yxkc[10];
}; 
student stu[30];
void tuichu()
{
    cout<<"欢迎再次使用！\n";
    exit(0);
}
void fanhui()
{
    cout<<"输入任意字符返回\n";
    char a;
    cin>>a;
    system("cls");
}
void openself()
{
    string xuehao1;
    int count=0;
    fstream file_stu;
    file_stu.open("E:\\student.txt",ios::out|ios::in);
    char output_stu[100];
    while(getline(file_stu,xuehao1)&&count<50)
    {if(xuehao1==strid)
    {
        file_stu.getline(output_stu,50);
        cout<<output_stu<<endl;
        count++;
    }}
    file_stu.close();
    fanhui();
    xueshengduan();
}
void openyxkc()
{
    fstream file_yxkc;
    file_yxkc.open("E:\\yxkc.txt",ios::out|ios::in);
    char output_yxkc[100];
	cout<<"*****************************\n";
    while(!file_yxkc.eof())
    {file_yxkc.getline(output_yxkc,100,'\n');
    cout<<output_yxkc<<endl;}
	cout<<"*****************************\n";
    file_yxkc.close();
    fanhui();
    xueshengduan();
}
void xuanke()
{
    fstream file_kc;
    file_kc.open("E:\\kc.txt",ios::out|ios::in);
    char output_kc[50];
    cout<<"*****************************\n";
    while(!file_kc.eof())
    {file_kc.getline(output_kc,100,'\n');
    cout<<output_kc<<endl;}
    cout<<"*****************************\n";
    file_kc.close();
    fstream file_choosekc;
    file_choosekc.open("E:\\yxkc.txt",ios::out|ios::in|ios::app);
    char output_choosekc[50];
    cout<<"请输入要选择的课程：\n";
    cin>>output_choosekc;
    file_choosekc<<"\n"<<"-"<<output_choosekc;
    file_choosekc.close();
    cout<<"**课程:"<<output_choosekc<<"选择成功**\n";
    fanhui();
    xueshengduan();
}
void openkc()
{
    fstream file_kc;
    file_kc.open("E:\\kc.txt",ios::out|ios::in);
    char output_kc[100];
    cout<<"*****************************\n";
    while(!file_kc.eof())
    {file_kc.getline(output_kc,100,'\n');
    cout<<output_kc<<endl;}
    cout<<"*****************************\n";
    file_kc.close();
    fanhui();
    guanliduan();
}
void addkc()
{
    string check_kc;
    fstream file_addkc,file_kc;
    file_addkc.open("E:\\kc.txt",ios::out|ios::in|ios::app);
    char output_addkc[50],output_kc[100];
    cout<<"*****************************\n";
    cout<<"已经添加的课程\n";
    while(!file_addkc.eof())
    {file_addkc.getline(output_kc,100,'\n');
    cout<<output_kc<<endl;}
    cout<<"*****************************\n";
	file_addkc.close();
	file_addkc.open("E:\\kc.txt",ios::out|ios::in|ios::app);
    cout<<"请输入要添加的课程:";
    cin>>output_addkc;
    file_addkc<<"\n"<<"-"<<output_addkc;
    file_addkc.close();
    cout<<"**课程:"<<output_addkc<<"添加成功**\n";
    fanhui();
	guanliduan();
}
void xueshengduan()
{
    cout<<"******************************\n"
        <<" 选课系统学生端 \n"
        <<" 1:查看个人信息 \n"
        <<" 2:查看已选课程\n"
        <<" 3:选课\n"
        <<" 0:退出\n"
        <<" 请选择操作方式:\n"
        <<"******************************\n";
    int j;
    cin>>j;
    switch(j)
    {
       case 1:
           openself();break;
       case 2:
           openyxkc();break;
       case 3:
           xuanke();break;
       case 0:
           tuichu();break;
	   default:
		   cout<<"请检查输入！\n";
		   xueshengduan();
		   break;
    }
}
void guanliduan()
{
    cout<<"******************************\n"
        <<" 选课系统管理员端 \n"
        <<" 1:查看所有课程 \n"
        <<" 2:添加课程 \n"
        <<" 0:退出\n"
        <<" 请选择操作方式:\n"
        <<"******************************\n";
    int k;
    cin>>k;
    switch(k)
    {
       case 1:
           openkc();break;
       case 2:
           addkc();break;
       case 0:
           tuichu();break;
	   default:
		   cout<<"请检查输入！\n";
		   guanliduan();
		   break;
    }
}
void zhuce()
{
        int c=0;
        fstream file_stu,file_xuehao,file_pwd;
        file_stu.open("E://student.txt",ios::in|ios::app);
        file_xuehao.open("E://xuehao.txt",ios::in|ios::app);
        file_pwd.open("E://passwd.txt",ios::in|ios::app);
        char output_name[10],output_sex[5];
        cout<<"请输入学号："; 
     	cin>>stu[c].name;
        file_stu<<"\n"<<stu[c].name;
        file_xuehao<<"\n"<<stu[c].name;
        cout<<"请输入姓名：";
        cin>>output_name;
        file_stu<<"\n"<<output_name;
        cout<<"请输入性别：";
        cin>>output_sex;
        file_stu<<"\n"<<output_sex;
        cout<<"请输入密码：";
        int index=0;
        while((stu[c].passwd[index]=getch())!='\r')
            {
                cout<<"*";
                index++;
            }
        file_pwd<<"\n"<<stu[c].passwd;
        stu[c].passwd[index]='\0';
     	c++;
        file_stu.close();
        file_xuehao.close();
        file_pwd.close();
        cout<<endl;
		int a1;
        do{cout<<"*****************************\n"
                    <<"0:重新登录\n"
 	                <<"1:退出\n"
                    <<"请选择操作：\n"
                    <<"*****************************\n";
        cin>>a1;
        system("cls");
        if(a1==0)
            xueshengdenglu();
        else if(a1==1)
			tuichu();
		else{
		cout<<"请检查输入！\n";
		}
		}while(a1!=0||a1!=1);
}
void xueshengdenglu()
{
 	string strpwd,strid1,strpwd1;
    int  a2;
    cout<<"             ******************************************************************************************" <<endl;
    cout<<"                                       欢迎进入中国矿业大学学生选课系统" <<endl; 
 	cout <<"请输入学号:";
    cin>>strid;
	fstream file_xuehao;
	file_xuehao.open("E://xuehao.txt",ios::in|ios::out);
	while(getline(file_xuehao,strid1))
	{
       if(strid==strid1)
          {
            cout<<"请输入密码:";
            while(true){ 
				if(kbhit()) 
                   { 
					   char temp=getch();
					   if(temp=='\r') 
						   break;
                       strpwd.push_back(temp);
					   cout<<'*';
			}}
			fstream file_pwd;
			file_pwd.open("E://passwd.txt",ios::in|ios::out);
			while(getline(file_pwd,strpwd1))
			{
             if(strpwd==strpwd1)
               {
 	            cout<<endl; 
                cout<<"用户名和密码正确，登录成功！"<<endl;
				system("pause");
				system("cls");
                xueshengduan();
               }
			}
			if(strpwd!=strpwd1)
               {
               	cout<<endl;
                cout<<"密码不正确！"<<endl;
				system("pause");
				system("cls");
                xueshengdenglu();
               }
			file_pwd.close();
           }
     }
    if (strid!=strid1)
      {
		cout<<endl;
        cout<<"用户名不存在！"<<endl;
        do{cout<<"*****************************\n"
                    <<"0:注册用户\n"
 	                <<"1:退出\n"
                    <<"请选择操作：\n"
                    <<"*****************************\n";
                cin>>a2;
                system("cls");
                if(a2==0)
                    zhuce();
                else if(a2==1)
					tuichu();
				else{
				cout<<"请检查输入！\n";
				}
		}while(a2!=0||a2!=1);
      }
    file_xuehao.close();
}
void guanlidenglu()
{
 	char guanid[10],guanliname[4];
    char guanpwd[10],guanpasswd[6];
    strcpy(guanliname,"admin");
    strcpy(guanpasswd,"1234560");
    int  i,a3,a4;
    cout<<"             ******************************************************************************************" <<endl;
    cout<<"                                       欢迎进入中国矿业大学学生选课系统" <<endl; 
 	cout <<"请输入管理员帐号:";
    cin>>guanid;
    if(strcmp(guanid,guanliname)==0)
      {
         cout<<"请输入密码:";
         int index=0;
         while((guanpwd[index]=getch())!='\r')
            {
               cout<<"*";
               index++;
            }
          guanpwd[index]='\0';
          if(strcmp(guanpwd,guanpasswd)==0)
            {
 	           cout<<endl; 
               cout<<"用户名和密码正确，登录成功！"<<endl;
               guanliduan();
             }
           else
             {
               cout<<endl;
               cout<<"密码不正确！"<<endl;
               do{cout<<"*****************************\n"
                   <<"0:重新登录\n"
 	               <<"1:退出\n"
                   <<"请选择操作：\n"
                   <<"*****************************\n";
               cin>>a3;
               system("cls");
               if(a3==0)
                guanlidenglu();
               else if(a3==1)
				   tuichu();
			   else{
			   cout<<"请检查输入！\n";
			   }
			   }while(a3!=0||a3!=1);
              }
        }
    else{
               cout<<"账号不正确！"<<endl;
               do{cout<<"******************************\n"
                   <<"0:重新登录\n"
 	               <<"1:退出\n"
                   <<"请选择操作：\n"
                   <<"******************************\n";
               cin>>a4;
               system("cls");
               if(a4==0)
                guanlidenglu();
               else if(a4==1)
				   tuichu();
			   else{
			   cout<<"请检查输入！\n";
			   }
			   }while(a4!=0||a4!=1);
    }
}
int checkname()
{
	int d;
 	do{cout<<"*******************************\n"
        <<"0:用已有账号登录\n"
 	    <<"1:注册新用户\n"
        <<"请选择操作：\n"
        <<"*******************************\n";
    cin>>d;
	if(d==0||d==1)
    return d;
	else{
	cout<<"请检查输入！\n";
	}}while(d!=0||d!=1);
}
int first()
{
	int e;
    do{cout<<"*****************************\n"
        <<"0:管理登录\n"
 	    <<"1:学生登录\n"
        <<"请选择操作：\n"
        <<"*****************************\n";
    cin>>e;
	if(e==0||e==1)
	return e;
	else{
	cout<<"请检查输入！\n";
	}
	}while(e!=0||e!=1);
}
int main() 
{
   int b,f;
   cout<<"             ******************************************************************************************" <<endl;
   cout<<"                                       欢迎进入中国矿业大学学生选课系统" <<endl; 
   f=first();
   if(f==0)
        guanlidenglu(); 
     else if(f==1){
     	b=checkname();
        if(b==0)
           xueshengdenglu(); 
        else if(b==1)
     	  zhuce();
     }
} 
 
