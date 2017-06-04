#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
		int a,b,c,i,n=0,sum;
		cout<<"请输入年月日（以空格隔开）：\n";
		cin>>a>>b>>c;
		for(i=2000;i<=a;i++)
		{
		    if(i%4==0&&i%100!=0||i%400==0)
		    n++;
		}
		if(a%4==0&&a%100!=0||a%400==0)
		{
			if(b==2&&c>29)
			{
			    cout<<"闰年二月是29天\n"; 
			}
			else
			{
		    sum=366*(n-1)+365*(a-2000+1-n);
		    switch(b)
		    {
		    	case 1:sum+=c;
		    		break;
		    	case 2:sum+=31+c;
		    		break;
	    		case 3:sum+=31+29+c;
	    		    break;
	    		case 4:sum+=62+29+c;
	    		    break;
				case 5:sum+=62+29+30+c;
	    		    break;
				case 6:sum+=93+29+30+c;
	    		    break;
				case 7:sum+=93+60+29+c;
	    		    break;
				case 8:sum+=124+60+29+c;
	    		    break;
				case 9:sum+=155+60+29+c;
	    		    break;
				case 10:sum+=155+90+29+c;
	    		    break;
				case 11:sum+=186+90+29+c;
	    		    break;
				case 12:sum+=186+120+29+c;
	    		    break;								    
		    	default:  cout<<"数据不合法\n"; 
		    		return 0;
		    }
			cout<<sum<<endl;}
		}
		else
		{
		    if(b==2&&c>28)
		    {
		        cout<<"平年二月是28天\n"; 
		    }
		    else{
    			sum=366*(n-1)+365*(a-2000+1-n);
		    switch(b)
		    {
		    	case 1:sum+=c;
		    		break;
		    	case 2:sum+=31+c;
		    		break;
	    		case 3:sum+=31+28+c;
	    		    break;
	    		case 4:sum+=62+28+c;
	    		    break;
				case 5:sum+=62+28+30+c;
	    		    break;
				case 6:sum+=93+28+30+c;
	    		    break;
				case 7:sum+=93+60+28+c;
	    		    break;
				case 8:sum+=124+60+28+c;
	    		    break;
				case 9:sum+=155+60+28+c;
	    		    break;
				case 10:sum+=155+90+28+c;
	    		    break;
				case 11:sum+=186+90+28+c;
	    		    break;
				case 12:sum+=186+120+28+c;
	    		    break;								    
		    	default:  cout<<"数据不合法\n"; 
		    		return 0;
		    }
			cout<<sum<<endl;}
		}
	} 
	return 0;
}