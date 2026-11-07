#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
	}
	else if(b[0]!=d[0]||b[1]!=d[1])
	{
	    cout<<"1000";
	}
	else 
	{
	    if(b[2]=='D'||b[2]=='F')
    	{
	        if(d[2]!='D'&&d[2]!='F')
		    {
	            cout<<"1100";
    	    }
        }
	    else
	    {
	        if(d[2]=='D'||d[2]=='F')
	        {
    	        cout<<"1100";
	        }
	        else
	        {
	        	if(b[2]=='A')
	        	{
	        		if(d[2]=='B')
	        		{
	        			cout<<"1111";
					}
					else
					{
						cout<<"1110";
					}
				}
				else if(b[2]=='B')
				{
					if(d[2]=='A'||b[2]=='C')
					{
						cout<<"1111";
					}
				}
				else if(b[2]=='C')
				{
					if(d[2]=='B')
					{
						cout<<"1111";
					}
				}
				else if(d[2]=='D'||d[2]=='F')
				{
					cout<<"1111";
				}
				else
				{
					cout<<"1110";
				}
			}
	    }
    }
	return 0;
}