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
    cout<<"��ӭ�ٴ�ʹ�ã�\n";
    exit(0);
}
void fanhui()
{
    cout<<"���������ַ�����\n";
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
    cout<<"������Ҫѡ��Ŀγ̣�\n";
    cin>>output_choosekc;
    file_choosekc<<"\n"<<"-"<<output_choosekc;
    file_choosekc.close();
    cout<<"**�γ�:"<<output_choosekc<<"ѡ��ɹ�**\n";
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
    cout<<"�Ѿ���ӵĿγ�\n";
    while(!file_addkc.eof())
    {file_addkc.getline(output_kc,100,'\n');
    cout<<output_kc<<endl;}
    cout<<"*****************************\n";
	file_addkc.close();
	file_addkc.open("E:\\kc.txt",ios::out|ios::in|ios::app);
    cout<<"������Ҫ��ӵĿγ�:";
    cin>>output_addkc;
    file_addkc<<"\n"<<"-"<<output_addkc;
    file_addkc.close();
    cout<<"**�γ�:"<<output_addkc<<"��ӳɹ�**\n";
    fanhui();
	guanliduan();
}
void xueshengduan()
{
    cout<<"******************************\n"
        <<" ѡ��ϵͳѧ���� \n"
        <<" 1:�鿴������Ϣ \n"
        <<" 2:�鿴��ѡ�γ�\n"
        <<" 3:ѡ��\n"
        <<" 0:�˳�\n"
        <<" ��ѡ�������ʽ:\n"
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
		   cout<<"�������룡\n";
		   xueshengduan();
		   break;
    }
}
void guanliduan()
{
    cout<<"******************************\n"
        <<" ѡ��ϵͳ����Ա�� \n"
        <<" 1:�鿴���пγ� \n"
        <<" 2:��ӿγ� \n"
        <<" 0:�˳�\n"
        <<" ��ѡ�������ʽ:\n"
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
		   cout<<"�������룡\n";
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
        cout<<"������ѧ�ţ�"; 
     	cin>>stu[c].name;
        file_stu<<"\n"<<stu[c].name;
        file_xuehao<<"\n"<<stu[c].name;
        cout<<"������������";
        cin>>output_name;
        file_stu<<"\n"<<output_name;
        cout<<"�������Ա�";
        cin>>output_sex;
        file_stu<<"\n"<<output_sex;
        cout<<"���������룺";
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
                    <<"0:���µ�¼\n"
 	                <<"1:�˳�\n"
                    <<"��ѡ�������\n"
                    <<"*****************************\n";
        cin>>a1;
        system("cls");
        if(a1==0)
            xueshengdenglu();
        else if(a1==1)
			tuichu();
		else{
		cout<<"�������룡\n";
		}
		}while(a1!=0||a1!=1);
}
void xueshengdenglu()
{
 	string strpwd,strid1,strpwd1;
    int  a2;
    cout<<"             ******************************************************************************************" <<endl;
    cout<<"                                       ��ӭ�����й���ҵ��ѧѧ��ѡ��ϵͳ" <<endl; 
 	cout <<"������ѧ��:";
    cin>>strid;
	fstream file_xuehao;
	file_xuehao.open("E://xuehao.txt",ios::in|ios::out);
	while(getline(file_xuehao,strid1))
	{
       if(strid==strid1)
          {
            cout<<"����������:";
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
                cout<<"�û�����������ȷ����¼�ɹ���"<<endl;
				system("pause");
				system("cls");
                xueshengduan();
               }
			}
			if(strpwd!=strpwd1)
               {
               	cout<<endl;
                cout<<"���벻��ȷ��"<<endl;
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
        cout<<"�û��������ڣ�"<<endl;
        do{cout<<"*****************************\n"
                    <<"0:ע���û�\n"
 	                <<"1:�˳�\n"
                    <<"��ѡ�������\n"
                    <<"*****************************\n";
                cin>>a2;
                system("cls");
                if(a2==0)
                    zhuce();
                else if(a2==1)
					tuichu();
				else{
				cout<<"�������룡\n";
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
    cout<<"                                       ��ӭ�����й���ҵ��ѧѧ��ѡ��ϵͳ" <<endl; 
 	cout <<"���������Ա�ʺ�:";
    cin>>guanid;
    if(strcmp(guanid,guanliname)==0)
      {
         cout<<"����������:";
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
               cout<<"�û�����������ȷ����¼�ɹ���"<<endl;
               guanliduan();
             }
           else
             {
               cout<<endl;
               cout<<"���벻��ȷ��"<<endl;
               do{cout<<"*****************************\n"
                   <<"0:���µ�¼\n"
 	               <<"1:�˳�\n"
                   <<"��ѡ�������\n"
                   <<"*****************************\n";
               cin>>a3;
               system("cls");
               if(a3==0)
                guanlidenglu();
               else if(a3==1)
				   tuichu();
			   else{
			   cout<<"�������룡\n";
			   }
			   }while(a3!=0||a3!=1);
              }
        }
    else{
               cout<<"�˺Ų���ȷ��"<<endl;
               do{cout<<"******************************\n"
                   <<"0:���µ�¼\n"
 	               <<"1:�˳�\n"
                   <<"��ѡ�������\n"
                   <<"******************************\n";
               cin>>a4;
               system("cls");
               if(a4==0)
                guanlidenglu();
               else if(a4==1)
				   tuichu();
			   else{
			   cout<<"�������룡\n";
			   }
			   }while(a4!=0||a4!=1);
    }
}
int checkname()
{
	int d;
 	do{cout<<"*******************************\n"
        <<"0:�������˺ŵ�¼\n"
 	    <<"1:ע�����û�\n"
        <<"��ѡ�������\n"
        <<"*******************************\n";
    cin>>d;
	if(d==0||d==1)
    return d;
	else{
	cout<<"�������룡\n";
	}}while(d!=0||d!=1);
}
int first()
{
	int e;
    do{cout<<"*****************************\n"
        <<"0:�����¼\n"
 	    <<"1:ѧ����¼\n"
        <<"��ѡ�������\n"
        <<"*****************************\n";
    cin>>e;
	if(e==0||e==1)
	return e;
	else{
	cout<<"�������룡\n";
	}
	}while(e!=0||e!=1);
}
int main() 
{
   int b,f;
   cout<<"             ******************************************************************************************" <<endl;
   cout<<"                                       ��ӭ�����й���ҵ��ѧѧ��ѡ��ϵͳ" <<endl; 
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
 
