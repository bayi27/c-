#include<iostream>
#include<fstream>
using namespace std;
void fun1()
{
	int i;
    ofstream outfile1("f1.txt");
    ofstream outfile2("f2.txt");
    for(i=0;i<15;i++)
       outfile1<<i*i+0.5<<"  ";
    for(i=0;i<10;i++)
       outfile2<<10*i+0.5<<"  ";
    outfile2<<"357.9"<<"  ";
    outfile1.close();
    outfile2.close();
}
void fun2()
{
	int i,j,k;
    double arr[25],temp,a[25];
    ifstream infile1("f1.txt");
    ifstream infile2("f2.txt");
    ofstream outfile3("f3.txt",ios::out);
    for(i=0;i<15;i++)
       {
	      infile1>>arr[i];
	}
    for(j=0;j<11;j++)
     {
     	 infile2>>arr[i+j];
     }
    for(i=0;i<26;i++)
      for(j=0;j<26-i;j++)
	  {
          if(arr[j]>arr[j+1])
          {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
          }
	  }
    for(i=0;i<26;i++)
       outfile3<<arr[i]<<"  ";
    infile1.close();
    infile2.close();
    outfile3.close();
	ifstream infile3("f3.txt");
    for(i=0;i<26;i++)
      {
        if(i%5==0) 
			cout<<endl;
        infile3>>a[i];
		cout<<a[i]<<"  ";
      }
	infile3.close();
}
int main()
{
    fun1();
    fun2();   
    cout<<endl;
    return 0;
}