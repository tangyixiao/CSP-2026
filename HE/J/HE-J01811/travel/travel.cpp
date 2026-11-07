#include<iostream>
#include<string>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	int a[20],b[20],q=0,m,v,p=0;
	string c[20];
	for(int i=0;i<2;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=0;i<1;i++)
	{
		if(a[i]==a[i+1])
		{
			cout<<"1";
			q++;
		}else
		{
			cout<<"0";
			p++;
		}
		if(p==1)cout<<"0";
		if(q==1)
		{
			
			
			if(b[i]==b[i+1])
		{
			cout<<"1";
			q++;
		}else
		{
			
			cout<<"0";
		}
		
		
		}
		
		if(q==2)
		{
			if(c[i]=="A"||c[i]=="B"||c[i]=="C")
		{
		    m=1;
		}
		else
		{
		    m=2;
		}
		if(c[i+1]=="A"||c[i+1]=="B"||c[i+1]=="C")
		{
		   	v=1;
		}else
		{
		   	v=2;
		}
		if(m==v)
	    {
		   	cout<<"1";
		}
		else
		{
		    cout<<"0";
		}
		}else
		{
			cout<<"0";
		}
		
		
		if(q==2)
		{
			if(c[i]=="A")
		    {
			if(c[i+1]=="B")
			{
				cout<<"1";
			}else
			{
				cout<<"0";
			}	
		    }
		if(c[i]=="B")
		{
			if(c[i+1]=="A"||c[i+1]=="C")
			{
				cout<<"1";
			}else
			{
				cout<<"0";
			}
		}
		if(c[i]=="C")
		{
			if(c[i+1]=="B")
			{
				cout<<"1";
			}else
			{
				cout<<"0";
			}	
		}
		if(c[i]=="D")
		{
			if(c[i+1]=="F")
			{
				cout<<"1";
			}else
			{
				cout<<"0";
			}	
		}
	   }else
	   {
		cout<<"0";
	   }
		
		
		
		
		
	return 0;
}
}
