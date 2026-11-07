#include<bits/stdc++.h>
using namespace std;
#define int long long
string a,b,c,d;
bool check1(string a,string b)
{
	if((a[2]=='A'||a[2]=='B'||a[2]=='C')&&(b[2]=='A'||b[2]=='B'||b[2]=='C'))
	{
		return true;
	}
	else if((a[2]=='D'||a[2]=='F')&&(b[2]=='D'||b[2]=='F'))
	{
		return true;
	}
	return false;
}
bool check2(string a,string b)
{
	if(a[2]=='A'&&b[2]=='B')
	{
		return true;
	}
	else if(a[2]=='B'&&b[2]=='A')
	{
		return true;
	}
	else if(a[2]=='B'&&b[2]=='C')
	{
		return true;
	}
	else if(a[2]=='C'&&b[2]=='B')
	{
		return true;
	}
	else if(a[2]=='D'&&b[2]=='F')
	{
		return true;
	}
	else if(a[2]=='F'&&b[2]=='D')
	{
		return true;
	}
	return false;
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1])
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1])
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(check1(b,d))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(check2(b,d))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
} 
