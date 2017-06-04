#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while(520)
	{
		int b,k,n=0,a=0,newx=0;
		long x;
		int s[20];
		cout<<"请输入一个无符号长整数：\n";
		cin>>x;
		newx=x;
		cout<<"请输入一个正整数：\n";
		cin>>k;
		//x为一位数时 
		if(newx<10) 
		{
			if(k==1)cout<<"newx="<<0<<endl;cout<<endl;
			if(k>1) cout<<"newx="<<newx<<endl;cout<<endl;
		}
		if(newx>=10)
		{
			while(x>=10)//这儿想做的是用s数组来记录每一位的数字 
			{	//这儿的数字是倒序存放的 orz 
		 		s[a]=x%10;   		
		        x=(x-s[n])/10; 
		        n++;
				a++;
			} 	
			s[a]=x;
			n++;//记录位数以及每位的数字 
	//		cout<<"========================================="<<endl;
			for(int i=0;i<n;i++)
				cout<<s[i]<<" ";
	//		cout<<"========================================="<<endl;
			cout<<endl;
			cout<<"此时的newx值是"<<newx<<"  n值是 "<<n<<" k值是 "<<k<<endl;
			cout<<endl;
			if(k>n)  // k 值大于位数 
			{
				newx=newx;
			}
			else
			{
				
			//	12345 n=5,k=2 
				for(int i=0;i<n;i++)
					cout<<s[i]<<"  ";
					cout<<endl;
					cout<<endl;
				for(int i=0;i<((n+1)/2);i++)
				{
					
					int temp=0;
			//		cout<<"==="<<s[i]<<"  "<<s[n-i-1]<<endl;
					temp=s[i];
					s[i]=s[n-i-1];
			//		cout<<"第一次"<<s[i]<<" ===== "<<s[n-i-1]<<endl;
					s[n-i-1]=temp;
				}
				for(int i=0;i<n;i++)
					cout<<s[i]<<"  ";
					cout<<endl;cout<<endl;
				s[n]=0;
				int p=0;
				p=n+1;
				for(int i=0;i<p;i++)
					cout<<s[i]<<"  ";
					cout<<endl;cout<<endl;					

				cout<<"嘿嘿 "<<s[n]<<endl;
				cout<<endl;
//现在上面的代码都对了，考虑如何正确的删除位数 
				 
				for(int i=n-k;i<n-1;i++)
				{
					cout<<s[i]<<" "<<s[i+1]<<endl;
					s[i]=s[i+1];
					for(int j=0;j<n;j++)
					{cout<<s[j]<<"  ";
					cout<<endl;}
				}//删去指定的位数 
				s[n-1]=0;
				cout<<endl;
				for(int j=0;j<n;j++)
				{
					cout<<s[j]<<"  ";
				}
				cout<<endl;
				n=n-1;newx=0;
				cout<<"此时n为=========="<<n<<"  newx为 "<<newx<<endl;
				for(int i=0;i<n;i++)
				{
					cout<<i<<"  "; 
					newx+=(s[i]*pow(10.0,n-i-1));
				}//剩下的位数加和 
			}
			int end=newx;
			cout<<"newx="<<newx<<endl;
			cout<<"newx="<<end<<endl;
			cout<<endl;
		}
	
	}
	return 0;
} 
