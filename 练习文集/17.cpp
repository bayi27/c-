#include <iostream>
using namespace std; 
int main()
{
	while (1)
	{int x,y;
	cout<<"��������ݼ��·�"<<endl;
	cin>>x>>y;
	 switch(y)
	 {
	 	case 1:
	 	case 3:
	 	case 5:
	 	case 7:
	 	case 8:
	 	case 10:
	 	case 12:cout<<"���·���31��"<<endl; 
	 		break;
	 	case 4:
	 	case 6:
	 	case 9:
	 	case 11:cout<<"���·���30��"<<endl;
	 		break;
	 	default:if((x%4==0&&x%100!=0)||x%400==0)
                 {
                   cout<<"���·���29��"<<endl; 
                 }
              else
                 {
                   cout<<"���·���30��"<<endl;
                 }
	 		break;
	 }}
	return 0;
}
