#include <iostream.h>
    using namespace std;
    int main()
    {
        while(1)
        {
            int a;
            cout<<"请输入一个年份"<<endl;
            cin>>a;
            if((a%4==0&&a%100!=0)||a%400==0)
            cout<<"此年为闰年"<<endl;
            else
            cout<<"此年不是闰年"<<endl;
        }
        return 0;
    }
