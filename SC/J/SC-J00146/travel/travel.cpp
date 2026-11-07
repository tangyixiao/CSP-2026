#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[1]==c[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(b[1]==d[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	int c=1; 
	if(b[2]=='C'&&d[2]=='D')
	{
		c=0;
	}
	if(b[2]=='D'&&d[2]=='C')
	{
		c=0;
	}
	if(b[2]=='D'&&d[2]=='A')
	{
		c=0;
	}
	if(b[2]=='A'&&d[2]=='D')
	{
		c=0;
	}
	if(b[2]=='D'&&d[2]=='B')
	{
		c=0;
	}
	if(b[2]=='B'&&d[2]=='D')
	{
		c=0;
	}
	if(b[2]=='F'&&d[2]=='A')
	{
		c=0;
	}
	if(b[2]=='A'&&d[2]=='F')
	{
		c=0;
	}
	if(b[2]=='F'&&d[2]=='C')
	{
		c=0;
	}
	if(b[2]=='C'&&d[2]=='F')
	{
		c=0;
	}
	if(b[2]=='F'&&d[2]=='B')
	{
		c=0;
	}
	if(b[2]=='B'&&d[2]=='F')
	{
		c=0;
	}
	if(c==1)	cout<<1;
	else		cout<<0; 
	int s=0;
	if(b[2]=='F'&&d[2]=='D')
	{
		s=1;
	}
	if(b[2]=='D'&&d[2]=='F')
	{
		s=1;
	}
	if(b[2]=='A'&&d[2]=='B')
	{
		s=1;
	}
	if(b[2]=='B'&&d[2]=='A')
	{
		s=1;
	}
	if(b[2]=='B'&&d[2]=='C')
	{
		s=1;
	}
	if(b[2]=='C'&&d[2]=='B')
	{
		s=1;
	}
	if(s==0)	cout<<0;
	else		cout<<1;
	return 0;
}