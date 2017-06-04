#include <iostream>
using namespace std;
int sum(char x,char y,int z){
	int result;
	if(x=='0'){
		result=(y-48)*z;
	}
	else{
		result=((x-48)*10+y-48)*z;
	}
	return result;
}
int main(){
	int i,n,h,m,s;
	char t[10];
	while(cin>>n)
	{
		for(i=0;i<n;i++){
			cin>>t;
			h=sum(t[0],t[1],3600);
			m=sum(t[3],t[4],60);
			s=sum(t[6],t[7],1);
			cout<<h+m+s<<endl;
		}
	}
	return 0;
}