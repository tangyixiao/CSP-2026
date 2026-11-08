#include<bits/stdc++.h>
using namespace std;
string a,b,x,y;
char q,p;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>b>>x>>y;
	q=b[2];
	p=y[2];
	if(a==x) cout<<1;
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==y[0] && b[1]==y[1]) cout<<1;
	else
	{
		cout<<"000";
		return 0;
	}
	if(((q=='A' || q=='B' || q=='C') && (p=='A' || p=='B' || p=='C')) || ((q=='D' || q=='F') && (p=='D' || p=='F'))) cout<<1;
	else
	{
		cout<<"00";
		return 0;
	}
	if(q=='A')
	{
		if(p=='B') cout<<1;
		else cout<<0;
	}
	else if(q=='B')
	{
		if(p=='A' || p=='C') cout<<1;
		else cout<<0;
	}
	else if(q=='C')
	{
		if(p=='B') cout<<1;
		else cout<<0;
	}
	else if(q=='D')
	{
		if(p=='F') cout<<1;
		else cout<<0;
	}
	else
	{
		if(p=='D') cout<<1;
		else cout<<0;
	}
	return 0;
}
