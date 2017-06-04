#include<iostream>
using namespace std;
typedef struct List{
	int L[205];
	int length;
}List;
List La,Lb;
bool LocateElem(List &La,int e){
	for(int i=0;i<La.length;i++){
		if(La.L[i]==e)
			return true;
	}
	return false;
}
void show(List &L){
	cout<<L.L[0];
	for(int i=1;i<L.length;i++)
		cout<<" "<<L.L[i];
	cout<<endl;
}
void Union(List &La,List &Lb){
	int e;
	for(int i=0;i<Lb.length;i++){
		e=Lb.L[i];
		if(!LocateElem(La,e)){
			La.L[La.length]=e;
			La.length++;			
		}
		show(La);
	}
}
int main(){
	int n1,n2,i;
	while(cin>>n1){ 
		for(i=0;i<n1;i++)
			cin>>La.L[i];
		La.length=n1;
		cin>>n2;
		for(int i=0;i<n2;i++)	
			cin>>Lb.L[i];
		Lb.length=n2;
		show(La);
		show(Lb);
		Union(La,Lb);
		cout<<endl;
	} 
	return 0;
}