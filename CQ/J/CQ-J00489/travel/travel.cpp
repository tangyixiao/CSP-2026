#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a=0,b=0,c=0,d=0;
	if(c1==c2)
	{
		cout<<1;
		a=1;
	}
	else
	{
		cout<<0;
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&s1!=s2&&a)
	{
		cout<<1;
		b=1;
	}
	else
	{
		cout<<0;
	}
	
	if(a&&b)
	{
		
		if(s1[2]<='C'&&s2[2]<='C')
		{
				c=1;cout<<1;
		}
		else if(s1[2]>'C'&&s2[2]>'C')
		{
			d=1;
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
	
	if(a&&b)
	{
		if(c)
		{
			if(s1[2]-s2[2]==1||s2[2]-s1[2]==1)
			{
				cout<<1;
			}
			else
			{
				cout<<0;
				return 0;
			}
		
		}
		else if(d)
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
    fclose(stdin);
    fclose(stdout);
	return 0;
 } 
