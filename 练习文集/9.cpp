#include <iostream.h>
using namespace std; 
int main()
{
	while(1) 
	{
       float a,b;
       int c;
       cout<<"������ѧ���ɼ�"<<endl;
       cin>>a;
       b=a/10;
       c=int(b);
       if(a<0&&a>100)
	{
	   cout<<"���ݲ��Ϸ�\n";
	}
       switch(c)
	{ 
	    case 10: 
		case 9:cout<<"A"<<endl;
			break;
		case 8:cout<<"B"<<endl;
			break;
		case 7:cout<<"C"<<endl;
			break;
	    case 6:cout<<"D"<<endl;
	        break;
        default:cout<<"E"<<endl; 
            break;
	}
	
	}
	return 0;
}
