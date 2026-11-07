#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,r1,x,x1;
	cin>>r>>r1>>x>>x1; 
	if(r==x)
	{
		cout<<"1";
	    if(r1[0]==x1[0]&&r1[1]==x1[1])
    	{
    		cout<<"1";
    		if(((r1[2]=='A'||r1[2]=='B'||r1[2]=='C')&&(x1[2]=='A'||x1[2]=='B'||x1[2]=='C'))||((r1[2]=='E'||r1[2]=='D')&&(x1[2]=='D'||x1[2]=='E')))
    	    {
    	    	cout<<"1";
    		    if(r1[2]-1==x1[2]||r1[2]+1==x1[2])
    		    {
    		    	cout<<"1"; 
				}
				else
				{
					cout<<"0";
				}
    	    }
    	    else
    	    {
    	    	cout<<"00";
    	    } 
	    }
	    else
	    {
	    	cout<<"000";
    	}
    	
	}
	else
	{
		cout<<"0000";
	}
	return 0;
 } 
