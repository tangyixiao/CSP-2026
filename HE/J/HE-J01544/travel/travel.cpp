#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<0<<0<<0<<0;
	}
	else if(b[1]!=d[1])
	{
		cout<<1000;
	}
	else 
	{
		if(b[2]=='F'||b[2]=='D')
		{
			if(d[2]=='A'||d[2]=='B'||d[2]=='C')
			{
				cout<<1100;
			}
			else cout<<1111;
		}
		else if(d[2]=='F'||d[2]=='D')
		{
			if(b[2]=='A'||b[2]=='B'||b[2]=='C')
			{
				cout<<1100;
			}
			else cout<<1111;
		}
		else
		{
			if(min(b[2],d[2])==d[2])
			{
				int ans=b[2]-d[2];
				if(ans==1)cout<<1111;
				else cout<<1110;
			}
			else
			{
				int ans=d[2]-b[2];
				if(ans==1)cout<<1111;
				else cout<<1110;
			}
		}
	}
	return 0;
}
