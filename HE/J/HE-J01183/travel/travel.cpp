#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int x=0,y=0,m=0; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    for(int i=0;i<2;i++)
    {
    	if(c1[i]==c2[i])
    	{
    		x=1;
		}
		else
		{
			x=0;
			break;
		}
	}
	if(x==1)
	{
		cout<<1;
	}
	else if(x==0)
	{
		cout<<0;
	}
	
	
	if(x==1)
	{
		for(int i=0;i<2;i++)
	    {
		    if(s1[i]==s2[i])
    	    {
    		    y=1;
		    }
		    else
		    {
			    y=0;
			    break;
		    }
	    }
	    if(y==1)
	    {
		    cout<<1;
	    }
	    else if(y==0)
	    {
		    cout<<0;
	    }
	}
	else
	{
		cout<<0<<0<<0;
		return 0;
	}
	
	
	if(y==1)
	{
		if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))
		{
			m=1;
		}
		else
		{
			m=0;
		}
		if(m==1)
	    {
		    cout<<1;
	    }
	    else if(m==0)
	    {
		    cout<<0;
	    }
	}
	else
	{
		cout<<0<<0;
		return 0;
	}
	
	
	if(m==1)
	{
		if(s1[2]==s2[2]+1||s2[2]==s1[2]+1)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	else
	{
		cout<<0;
	}
	return 0;
}
