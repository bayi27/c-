#include <iostream.h>
    using namespace std;
    int main()
    {
        while(1)
        {
            int a;
            cout<<"������һ�����"<<endl;
            cin>>a;
            if((a%4==0&&a%100!=0)||a%400==0)
            cout<<"����Ϊ����"<<endl;
            else
            cout<<"���겻������"<<endl;
        }
        return 0;
    }
