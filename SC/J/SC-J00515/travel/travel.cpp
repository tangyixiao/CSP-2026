#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
char a,a0,b,b0,a1,a2,a3,b1,b2,b3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a0;//车厢 
	cin>>a1>>a2>>a3;//排和座位 
	cin>>b>>b0;//车厢
	cin>>b1>>b2>>b3;//排和座位 
	if(a==b&&a0==b0)
	{
		cout<<1;
		if(a1==b1&&a2==b2)
	    {
		    cout<<1;
		    if((a3=='A'&&(b3=='B'||b3=='C'))||(a3=='B'&&(b3=='A'||b3=='C'))||(a3=='C'&&(b3=='A'||b3=='B'))||(a3=='D'&&b3=='F')||(a3=='F'&&b3=='D'))
		    {
		    	cout<<1;
		    	if((a3=='A'&&b3=='B')||(a3=='B'&&b3=='A')||(a3=='B'&&b3=='C')||(a3=='C'&&b3=='B')||(a3=='D'&&b3=='F')||(a3=='F'&&b3=='D'))
		        {
		        	cout<<1;
		        	return 0;
			    }
			    else
			    {
			    	cout<<0;
			    	return 0;
				}
			}
			else
			{
				cout<<0<<0;
				return 0;
			}
        } 
        else
        {
        	cout<<0<<0<<0;
        	return 0;
		}
	}
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	return 0;
}