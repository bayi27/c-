#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char is[50],os[50];
	int len1,i,j=0,n;
	cin>>is;
	len1=strlen(is);
	for(i=0;i<len1;i++)
	{
		if(is[i]>'9'||is[i]<'0')
		{
			os[j]=is[i];
			j++;
		}
		else if(is[i]<='9'&&is[i]>='0')
		{
			for(n=0;n<=(is[i]-'0');n++)
			{
				os[j]=('a'+is[i]-'0');
				j++;
			}
		}
	}
	i=0;
	while(os[i]!='\0')
	{
		cout<<os[i];
		i++;
	}
	return 0;
 } 
