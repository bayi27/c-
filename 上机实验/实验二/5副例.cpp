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
		cout<<"������һ���޷��ų�������\n";
		cin>>x;
		newx=x;
		cout<<"������һ����������\n";
		cin>>k;
		//xΪһλ��ʱ 
		if(newx<10) 
		{
			if(k==1)cout<<"newx="<<0<<endl;cout<<endl;
			if(k>1) cout<<"newx="<<newx<<endl;cout<<endl;
		}
		if(newx>=10)
		{
			while(x>=10)//�������������s��������¼ÿһλ������ 
			{	//����������ǵ����ŵ� orz 
		 		s[a]=x%10;   		
		        x=(x-s[n])/10; 
		        n++;
				a++;
			} 	
			s[a]=x;
			n++;//��¼λ���Լ�ÿλ������ 
	//		cout<<"========================================="<<endl;
			for(int i=0;i<n;i++)
				cout<<s[i]<<" ";
	//		cout<<"========================================="<<endl;
			cout<<endl;
			cout<<"��ʱ��newxֵ��"<<newx<<"  nֵ�� "<<n<<" kֵ�� "<<k<<endl;
			cout<<endl;
			if(k>n)  // k ֵ����λ�� 
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
			//		cout<<"��һ��"<<s[i]<<" ===== "<<s[n-i-1]<<endl;
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

				cout<<"�ٺ� "<<s[n]<<endl;
				cout<<endl;
//��������Ĵ��붼���ˣ����������ȷ��ɾ��λ�� 
				 
				for(int i=n-k;i<n-1;i++)
				{
					cout<<s[i]<<" "<<s[i+1]<<endl;
					s[i]=s[i+1];
					for(int j=0;j<n;j++)
					{cout<<s[j]<<"  ";
					cout<<endl;}
				}//ɾȥָ����λ�� 
				s[n-1]=0;
				cout<<endl;
				for(int j=0;j<n;j++)
				{
					cout<<s[j]<<"  ";
				}
				cout<<endl;
				n=n-1;newx=0;
				cout<<"��ʱnΪ=========="<<n<<"  newxΪ "<<newx<<endl;
				for(int i=0;i<n;i++)
				{
					cout<<i<<"  "; 
					newx+=(s[i]*pow(10.0,n-i-1));
				}//ʣ�µ�λ���Ӻ� 
			}
			int end=newx;
			cout<<"newx="<<newx<<endl;
			cout<<"newx="<<end<<endl;
			cout<<endl;
		}
	
	}
	return 0;
} 
