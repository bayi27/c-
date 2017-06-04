#include<iostream>   
#include<stack>   
using namespace std;  
#define MAXSIZE 1000    
char str[MAXSIZE];  
void Conversion(int num,int b){  
    stack<int>S;
    do{
        S.push(num%b);  
        num/= b;  
    }while(num);
    while(!S.empty()){  
        cout<<S.top();  
        S.pop();  
    }
   cout<<endl;  
}
int main()  
{
    int a,b;  
    while(cin>>a){  
        b = 8; 
        Conversion(a,b);  
    }
    return 0;  
}