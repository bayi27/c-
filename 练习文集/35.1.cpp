#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j,sum=0;
	int s[50][50];//���岢��ʼ������ 
	cout<<"��������n,m\n";
	cin>>n>>m;	// n ������ �� m�������� 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>s[i][j];//��������������ֵ 
		
		}
	} 
	i=0;
	j=0; 
/*	cout<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<s[i][j]<<" ";//��������������ֵ 
		}
		cout<<endl;
	} 
	cout<<endl;
*/
	i=0;
	j=0;
	for(j=0;j<n;j++)	//���� 
	{
		if(j==0)  //��һ�� 
		{
			for(i=m-1;i>=0;i--) // ���� 
			{
				int k=i;
				int p=m-k;
		//		cout<<endl;
		//		cout<<"���iֵ�� "<<i<<"  ���pֵ�� "<<p<<endl; 
				if(j==0)
				{
					if(i==m-1)
					{
					//		cout<<"i ��j��ֵ�� "<<i<<" "<<j <<endl; 
						sum=s[i][j];
				//		cout<<"�ٹ��� "<<sum<<endl; 
				//		cout<<sum<<" "<<endl; 
						cout<<sum<<" "; 
						sum=0; 
					} 
					else 
					{
						int e=i;
						int r=j;
						while(p--)
						{	
						
						//	cout<<"e ��r��ֵ�� "<<e<<" "<<r<<endl; 
						//	cout<<"haha"<<s[e][r]<<"hehe"<<endl; 
							sum+=s[e][r];
							e=e+1;
							r=r+1;
						}
					//	cout<<"�ٺ�"<<sum<<endl;
						cout<<sum<<" ";
						sum=0;
					}
				}
			}
		}
		i=0;
		// �������ǶԷǵ�һ��Ԫ�صĶԽ��߽������ 
		if(j>0) 	// n ������ �� m�������� 
		{	int r=j;
//			cout<<endl;
		//	cout<<"��ʱ�ǵ� "<<r+1<<" ��"<<endl;
		//	cout<<"��ʱ��n��m�ֱ��� "<<n<<" "<<m<<endl;
		//	cout<<endl;
		//	cout<<endl;
			for(i=0;i<m;i++)
			{
			//	cout<<"i ��r��ֵ�� "<<i<<" "<<r<<endl; 

//				cout<<endl;
//				cout<<" "<<s[i][r]<<endl;;
				sum+=s[i][r];
				r++;
			}
//			cout<<"���� "<<sum<<endl;
		cout<<sum<<" ";
			sum=0;
		}	
	}
	return 0;
}
