#include <iostream>
using namespace std;
int main(){
	int i;
	char s[100];
	cin>>s;
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]+=5;
			if(s[i]>'z')
			{
				s[i]-=26;
			}
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=5;
			if(s[i]>'Z')
			{
				s[i]-=26;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}