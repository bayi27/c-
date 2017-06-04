#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[30];
	char line[100],maxLine[100],minLine[100];
	int i,length,noteIndex,maxLength=0,minLength=101;
	bool isThereNote;
	cout<<"请输入文件名:\n";	
	cin>>name;			
	fstream film1,film2,film3;
	film1.open(name,ios::in);
	film2.open("context.txt",ios::out);
	film3.open("note.txt",ios::out);
	do
	{
		film1.getline(line,100);	
		isThereNote=false;
		i=0;
		while(line[i]!='\0')		
		{
			if(line[i]=='/'&&line[i-1]=='/')		
			{
				isThereNote=true;
				noteIndex=i+1;
			}
			i++;
		}
		length=i;					
		if(length>maxLength)	
		{
			maxLength=length;	
			strcpy(maxLine,line);
		}
		if(length<minLength&&length!=0)	
		{
			minLength = length;		
			strcpy(minLine,line);	
		}
		if(isThereNote)				
		{
			for(i=0;i<noteIndex-2;i++)	
			{
				film2<<line[i];
			}
			film2<<endl;			
			i=noteIndex;				
			while(line[i]!='\0')		
			{
				film3<<line[i];
				i++;
			}
			film3<<"\n";			
		}else						
		{
			i=0;
			while(line[i]!='\0')
			{
				film2<<line[i];		
				i++;
			}
			film2<<"\n";
		}
	}while(!film1.eof());
	cout<<"最长行为:"<<maxLine<<endl;
	cout<<"长度为:"<<maxLength<<endl;
	cout<<"最短行为:"<<minLine<<endl;
	cout<<"长度为:"<<minLength<<endl;
	film1.close();
	film2.close();
	film3.close();
	return 0;
}