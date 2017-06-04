#include <iostream>
using namespace std;
int main(){
	int L,M,a,b,i,move,j;
	while(cin>>L>>M)
	{
		int s[10001]={0};
		while(M--){
			cin>>a>>b;
			for(i=a;i<=b;i++)
				s[i]=-1;
		}
		move=0;
		for(j=0;j<=L;j++){
			if(s[j]==-1)
				move+=1;
		}
		cout<<L-move+1<<endl;
	}
	return 0;
}