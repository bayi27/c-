#include <iostream>
using namespace std; 
int main()
{
	while (1)
	{int x,y;
	cout<<"请输入年份及月份"<<endl;
	cin>>x>>y;
	 switch(y)
	 {
	 	case 1:
	 	case 3:
	 	case 5:
	 	case 7:
	 	case 8:
	 	case 10:
	 	case 12:cout<<"此月份有31天"<<endl; 
	 		break;
	 	case 4:
	 	case 6:
	 	case 9:
	 	case 11:cout<<"此月份有30天"<<endl;
	 		break;
	 	default:if((x%4==0&&x%100!=0)||x%400==0)
                 {
                   cout<<"此月份有29天"<<endl; 
                 }
              else
                 {
                   cout<<"此月份有30天"<<endl;
                 }
	 		break;
	 }}
	return 0;
}
