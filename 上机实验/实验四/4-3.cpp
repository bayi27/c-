#include <iostream>
using namespace std;
int main()
{
	while(520)
	{
		int a,b,c,i,n=0,sum,d,e,f;
		cout<<"请分别输入年月日（以空格隔开）：\n";
		cin>>a>>b>>c>>d>>e>>f;
		if(a>d)
		{
			int temp;
			temp=a;
			a=d;
			d=temp;
			temp=b;
			b=e;
			e=temp;
			temp=c;
			c=f;
			f=temp;
		 } 
		for(i=a+1;i<d;i++)
		{
		    if(i%4==0&&i%100!=0||i%400==0)
		    n++;
		}
		if(d%4==0&&d%100!=0||d%400==0)
		{
			if(e==2&&f>29)
			{
			    cout<<"闰年二月是29天\n"; 
			}
			else
			{
		    sum=366*n+365*(d-a-1-n);
		    switch(e)
		    {
		    	case 1:sum+=f;
		    		break;
		    	case 2:sum+=31+f;
		    		break;
	    		case 3:sum+=31+29+f;
	    		    break;
	    		case 4:sum+=62+29+f;
	    		    break;
				case 5:sum+=62+29+30+f;
	    		    break;
				case 6:sum+=93+29+30+f;
	    		    break;
				case 7:sum+=93+60+29+f;
	    		    break;
				case 8:sum+=124+60+29+f;
	    		    break;
				case 9:sum+=155+60+29+f;
	    		    break;
				case 10:sum+=155+90+29+f;
	    		    break;
				case 11:sum+=186+90+29+f;
	    		    break;
				case 12:sum+=186+120+29+f;
	    		    break;								    
		    	default:  cout<<"数据不合法\n"; 
		    		return 0;
		    }
			}
		}
		else
		{
		    if(e==2&&f>28)
		    {
		        cout<<"平年二月是28天\n"; 
		    }
		    else{
    			sum=366*n+365*(d-a-1-n);
		    switch(e)
		    {
		    	case 1:sum+=f;
		    		break;
		    	case 2:sum+=31+f;
		    		break;
	    		case 3:sum+=31+28+f;
	    		    break;
	    		case 4:sum+=62+28+f;
	    		    break;
				case 5:sum+=62+28+30+f;
	    		    break;
				case 6:sum+=93+28+30+f;
	    		    break;
				case 7:sum+=93+60+28+f;
	    		    break;
				case 8:sum+=124+60+28+f;
	    		    break;
				case 9:sum+=155+60+28+f;
	    		    break;
				case 10:sum+=155+90+28+f;
	    		    break;
				case 11:sum+=186+90+28+f;
	    		    break;
				case 12:sum+=186+120+28+f;
	    		    break;								    
		    	default:  cout<<"数据不合法\n"; 
		    		return 0;
		    }
			}
		}
		int sum1=0; 
		if(a%4==0&&a%100!=0||a%400==0)
		    {
		    	if(b==2&&c>29)
			{
			    cout<<"闰年二月是29天\n"; 
			}
			else
			{
		    switch(e)
		    {
		    	case 1:sum1+=c;
		    		break;
		    	case 2:sum1+=31+c;
		    		break;
	    		case 3:sum1+=31+29+c;
	    		    break;
	    		case 4:sum1+=62+29+c;
	    		    break;
				case 5:sum1+=62+29+30+c;
	    		    break;
				case 6:sum1+=93+29+30+c;
	    		    break;
				case 7:sum1+=93+60+29+c;
	    		    break;
				case 8:sum1+=124+60+29+c;
	    		    break;
				case 9:sum1+=155+60+29+c;
	    		    break;
				case 10:sum1+=155+90+29+c;
	    		    break;
				case 11:sum1+=186+90+29+c;
	    		    break;
				case 12:sum1+=186+120+29+c;
	    		    break;								    
		    	default:  cout<<"数据不合法\n"; 
		    		return 0;
		    }
		    cout<<sum+366-sum1<<endl;
			}
			}
			else {
				if(b==2&&c>28)
		    {
		        cout<<"平年二月是28天\n"; 
		    }	
		    switch(b)
		    {
		    	case 1:sum1+=c;
		    		break;
		    	case 2:sum1+=31+c;
		    		break;
	    		case 3:sum1+=31+28+c;
	    		    break;
	    		case 4:sum1+=62+28+c;
	    		    break;
				case 5:sum1+=62+28+30+c;
	    		    break;
				case 6:sum1+=93+28+30+c;
	    		    break;
				case 7:sum1+=93+60+28+c;
	    		    break;
				case 8:sum1+=124+60+28+c;
	    		    break;
				case 9:sum1+=155+60+28+c;
	    		    break;
				case 10:sum1+=155+90+28+c;
	    		    break;
				case 11:sum1+=186+90+28+c;
	    		    break;
				case 12:sum1+=186+120+28+c;
	    		    break;								    
		    	default:  cout<<"数据不合法\n"; 
		    		return 0;
		    }
		    cout<<sum+365-sum1<<endl;
			}
	} 
	return 0;
}

