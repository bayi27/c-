#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j,sum=0;
	int s[50][50];//定义并初始化数组 
	cout<<"请输入你n,m\n";
	cin>>n>>m;	// n 是列数 ， m才是行数 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>s[i][j];//依次输入数组数值 
		
		}
	} 
	i=0;
	j=0; 
/*	cout<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<s[i][j]<<" ";//依次输入数组数值 
		}
		cout<<endl;
	} 
	cout<<endl;
*/
	i=0;
	j=0;
	for(j=0;j<n;j++)	//对列 
	{
		if(j==0)  //第一列 
		{
			for(i=m-1;i>=0;i--) // 对行 
			{
				int k=i;
				int p=m-k;
		//		cout<<endl;
		//		cout<<"这个i值是 "<<i<<"  这个p值是 "<<p<<endl; 
				if(j==0)
				{
					if(i==m-1)
					{
					//		cout<<"i 和j的值是 "<<i<<" "<<j <<endl; 
						sum=s[i][j];
				//		cout<<"嘿哈嘿 "<<sum<<endl; 
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
						
						//	cout<<"e 和r的值是 "<<e<<" "<<r<<endl; 
						//	cout<<"haha"<<s[e][r]<<"hehe"<<endl; 
							sum+=s[e][r];
							e=e+1;
							r=r+1;
						}
					//	cout<<"嘿嘿"<<sum<<endl;
						cout<<sum<<" ";
						sum=0;
					}
				}
			}
		}
		i=0;
		// 接下来是对非第一列元素的对角线进行求和 
		if(j>0) 	// n 是列数 ， m才是行数 
		{	int r=j;
//			cout<<endl;
		//	cout<<"此时是第 "<<r+1<<" 列"<<endl;
		//	cout<<"此时的n和m分别是 "<<n<<" "<<m<<endl;
		//	cout<<endl;
		//	cout<<endl;
			for(i=0;i<m;i++)
			{
			//	cout<<"i 和r的值是 "<<i<<" "<<r<<endl; 

//				cout<<endl;
//				cout<<" "<<s[i][r]<<endl;;
				sum+=s[i][r];
				r++;
			}
//			cout<<"哈哈 "<<sum<<endl;
		cout<<sum<<" ";
			sum=0;
		}	
	}
	return 0;
}
