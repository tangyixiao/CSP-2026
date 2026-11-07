#include<bits/stdc++.h>
#define int long long
int c,b;
using namespace std;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,d;
	cin>>c>>s>>b>>d;
	if(s==d)
	{
		for(int i=1;i<=4;i++)
		{
			cout<<0;
			
		}
		return 0;	
	}
	if(c==b)
	{
		cout<<1;
	}
	else
	{
		for(int i=1;i<=4;i++)
		{
			cout<<0;
			
		}
		return 0;
	}
	if(s[0]==d[0]&&s[1]==d[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(s[0]==d[0]&&s[1]==d[1])
	{
		if((s[2]>='A'&&s[2]<='C')&&(d[2]>='A'&&d[2]<='C')||(s[2]>='D'&&s[2]<='F')&&(d[2]>='D'&&d[2]<='F'))
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
	if(s[0]==d[0]&&s[1]==d[1])
	{
		if((s[2]>='A'&&s[2]<='C')&&(d[2]>='A'&&d[2]<='C')||(s[2]>='D'&&s[2]<='F')&&(d[2]>='D'&&d[2]<='F'))
		{
			if(s[2]-d[2]==1||s[2]-d[2]==-1)
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
	}
	else
	{
		cout<<0;
	}
	return 0;
}
