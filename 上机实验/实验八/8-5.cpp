#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
const int N=20;
class competitor
{
private:
	int NO;  
	int judge_amount;  
	string name;  
	double score[N];  
public:
	competitor(string na,int no,int ju,double s[N]); 
	int get_no();
	string get_name();
	int get_judge_amount();
	double *get_score();
	void sort();  
	double max();  
	double min();  
	double last_score(); 
	double total_score(); 
	void show_date();  
};
competitor::competitor(string na,int no,int ju,double s[N])
{
	name=na;
	NO=no;
	judge_amount=ju;
	for(int i=0;i<judge_amount;i++)
		score[i]=s[i];
	for(int j=judge_amount;j<N;j++)
		score[judge_amount]=s[judge_amount];
}
int competitor::get_no()
{
	return NO;
}
string competitor::get_name()
{
	return name;
}
int competitor::get_judge_amount()
{
	return judge_amount;
}
double *competitor::get_score()
{
	return score;
}
void competitor::sort()
{
	int i,j,k,temp;
	for(i=0;i<judge_amount-1;i++)
	{
		k=i;
		for(j=i;j<judge_amount;j++)
		{
			if(score[k]<score[j])
				k=j;
		}
		if(k!=i)
		{
			temp=score[i];
			score[i]=score[k];
			score[k]=temp;
		}
	}
}
double competitor::last_score()
{
	double sum=0;
	if(judge_amount<9)
	{
		for(int i=1;i<judge_amount-1;i++)
			sum+=score[i];
		return sum/(judge_amount-2);
	}
	if(judge_amount>=9)
	{
		for(int i=2;i<judge_amount-2;i++)
			sum=sum+score[i];
		return sum/(judge_amount-4);
	}
}
double competitor::total_score()
{
	double sum=0;
	if(judge_amount<9)
	{
		for(int i=1;i<judge_amount-1;i++)
			sum+=score[i];
		return sum;
	}
	if(judge_amount>=9)
	{
		for(int i=2;i<judge_amount-2;i++)
			sum+=score[i];
		return sum;
	}
}
double competitor::max()
{
	return score[0];
}
double competitor::min()
{
	return score[judge_amount-1];
} 
void competitor::show_date()
{
	cout<<NO;
	cout<<setw(10)<<name;
	for(int i=0;i<judge_amount;i++)
		cout<<setw(5)<<setprecision(2)<<score[i]<<"  ";
	cout<<endl;
}
void show_rerult(competitor &player)
{
	player.sort();
	cout<<player.get_no();
	cout<<setw(12)<<player.get_name();
	cout<<setw(12)<<setprecision(2)<<player.max();
	cout<<setw(12)<<setprecision(2)<<player.min();
	cout<<setw(14)<<setprecision(2)<<player.total_score();
	cout<<setw(13)<<setprecision(2)<<player.last_score()<<endl;
}
ofstream & operator<<(ofstream & base,competitor & a)
{
	base<<a.get_no()<<"  "<<a.get_name()<<"    ";
	 for(int i=0;i<a.get_judge_amount();i++)
		 base<<"  "<<a.get_score()[i];
	 base<<endl;
	 return base;
}
void out_to_file(competitor a)
{
	ofstream outfile1;
	outfile1.open("d:\\competitor result.txt",ios::app);
	outfile1<<"    "<<a.get_no()<<"      "<<setw(-5)<<a.get_name()<<"     "<<a.max()<<"          "<<a.min();
	outfile1<<"          "<<a.total_score()<<"          "<<a.last_score()<<endl;
	outfile1.close();
}
int main()
{
	double t1[20]={8.8,9.3,7.9,8.7,8.9,9.7,9.2};
	double t2[20]={8.9,8.2,8.6,8.8,8.5,9.1,9.3};
	double t3[20]={8.9,8.4,8.7,8.6,8.6,8.4,8.6};
	double t4[20]={7.9,8.3,8.5,8.6,8.5,8.9,8.3};
	double t5[20]={9.5,9.1,9.8,9.2,9.0,9.5,8.9};
	competitor player1("zhangjin",1,7,t1);
	competitor player2("lintao",2,7,t2);
	competitor player3("guojian",3,7,t3);
	competitor player4("maling",4,7,t4);
	competitor player5("liuyifan",5,7,t5);
	player1.show_date();
	player2.show_date();
	player3.show_date();
	player4.show_date();
	player5.show_date();
	cout<<endl;
	cout<<"*********************************************************************\n";
	cout<<"赛号"<<setw(8)<<"姓 名"<<setw(14)<<"最高分"<<setw(13)<<"最低分";
	cout<<setw(14)<<"累积分"<<setw(14)<<"最后得分"<<endl;  show_rerult(player1);
	show_rerult(player2);
	show_rerult(player3);
	show_rerult(player5);
	show_rerult(player4);
	ofstream outfile1("d:\\competitor data.txt");
	outfile1<<player1<<player2<<player3<<player4<<player5;
	outfile1.close();
	ofstream outfile2;
	outfile2.open("d:\\competitor result.txt",ios::app);
	outfile2<<"   "<<"赛号"<<setw(10)<<"姓 名"<<setw(15)<<"最高分"<<setw(12)<<"最低分";
	outfile2<<setw(14)<<"累积分"<<setw(13)<<"最后得分"<<endl;
	out_to_file(player1);
	out_to_file(player2);
	out_to_file(player3);
	out_to_file(player4);
	out_to_file(player5);
	return 0;
}