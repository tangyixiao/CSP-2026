#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long s,x;
	cin>>a>>b>>c>>d;
	if(a[0]==c[0])
	{
		if(a[1]==c[1])
		{
			cout<<"1";
		}
		else
		{
			cout<<"0000";
			return 0;
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0])
	{
		if(b[1]==d[1])
		{
			cout<<"1";
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(b[2]=='A' || b[2]=='B' || b[2]=='C')
	{
		s=1;
	}
	else
	{
		s=0;
	}
	if(d[2]=='A' || d[2]=='B' || d[2]=='C')
	{
		x=1;
	}
	else
	{
		x=0;
	}
	if(s==x)
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(b[2]=='A' && d[2]=='B')
	{
		cout<<"1";
	}
    else if(b[2]=='B' && d[2]=='C')
	{
		cout<<"1";
	}
	else if(b[2]=='D' && d[2]=='F')
	{
		cout<<"1";
	}
	else if(b[2]=='B' && d[2]=='A')
	{
		cout<<"1";
	}
    else if(b[2]=='C' && d[2]=='B')
	{
		cout<<"1";
	}
	else if(b[2]=='F' && d[2]=='D')
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}