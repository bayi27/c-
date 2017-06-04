#include<iostream>
using namespace std;
int main()
{
    int N,a[10],i=0,j,b,c;
    cin>>N;
    while(cin>>a[i]){
        i++;
        if(i==N) break;
    }
    for(j=0;j<i;j++){
        b=0,c=0;
        while(a[j]){
            b=a[j]%10+b*10;
            a[j]=a[j]/10;
            c++;
        }
        cout<<c<<" "<<b<<endl;
    }
    return 0;
}
