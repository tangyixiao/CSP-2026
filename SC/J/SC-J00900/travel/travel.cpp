#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string b,d;
	int a,c;
	cin>>a>>b>>c>>d;
	int r,x;//编号
	if(a==c)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	r=(b[0]-'0')*10+b[1]-'0';
	x=(d[0]-'0')*10+d[1]-'0';
	if(r==x)
	{
		cout<<1;
		if(b[2]=='F')
		{
			if(d[2]=='D')
			cout<<1<<1;
			else
			cout<<0<<0;
		}
		if(b[2]=='D')
		{
			if(d[2]=='F')
			cout<<1<<1;
			else
			cout<<0<<0;
		}
		if(b[2]=='C')
		{
			if(d[2]=='B' || d[2]=='A')
			{
				cout<<1;
				if(d[2]=='B')
					cout<<1;
				else
					cout<<0;
			}
			else
				cout<<0<<0;
		}
		if(b[2]=='B')
		{
			if(d[2]=='A' || d[2]=='C')
			{
				cout<<1<<1;
			}
		}
		if(b[2]=='A')
		{
			if(d[2]=='B' || d[2]== 'C')
			{
				cout<<1;
				if(d[2]=='B')
					cout<<1;
				else
					cout<<0;
			}
			else
			{
				cout<<0<<0;
			}
		}
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
	}
	
	return 0;
}