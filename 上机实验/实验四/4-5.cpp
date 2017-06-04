#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	char dig[10][10];
	int i,j,s[20]={0};
	srand((unsigned int) time(0));
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			dig[i][j]=rand()%10+'0';
		}
	 }
	  	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			switch(dig[i][j])
			{
				case '0': s[0]++;
				break;
				case '1': s[1]++;
				break;
				case '2': s[2]++;
				break;
				case '3': s[3]++;
				break;
				case '4': s[4]++;
				break;
				case '5': s[5]++;
				break;
				case '6': s[6]++;
				break;
				case '7': s[7]++;
				break;
				case '8': s[8]++;
				break;
				case '9': s[9]++;
				break;
			}
		}
	 } 
	 for(i=0;i<10;i++)
	 cout<<s[i]<<" ";
	return 0;
} 
