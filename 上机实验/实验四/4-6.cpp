#include<iostream>
using namespace std;
int main()
{
    int m,j;
    int a[300];
    cin>> m;
    for (int i = 0; i < 12; i++)
        a[i] = i + 1;
    int k = 12;
    while (k>1)
    {
        for (int i = 0; i <12; i++)
        {
            if (a[i] == 0)
            continue;
            else
            j++;
            if (j==m)            
            {
                a[i]=0;
				j=0;
				k--;
            }
        }
    }
    for(int i=0;i<12;i++)
    {
    if(a[i]!=0)
    cout<<a[i]<<endl;
    }
    system("pause");
    return 0;
}

