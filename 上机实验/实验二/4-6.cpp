#include<iostream>
  using namespace std;

  int main()
 {
      int n, m,j;
      int a[300];
      cin >> n >> m;
        for (int i = 0; i < n; i++)
            a[i] = i + 1;
        int k = n;
         while (k>1)
         {
              
              for (int i = 0; i < n; i++)
             {
                if (a[i] == 0)
                      continue;
                  else
                      j++;
                  if (j == m)            
                  {
                      a[i]=0;j=0;k--;
                 }
             }
         }
         for (int i=0;i<n;i++)
          {
              if(a[i]!=0)
                 cout<<a[i]<<endl;
          }
      system("pause");
      return 0;
}
