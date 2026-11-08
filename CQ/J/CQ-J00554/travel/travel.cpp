#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1,f2,f3;
bool check(char x,char y)
{
	if (x=='A')
	{
		if (y=='B' || y=='C')
		{
			return true;
		}
		return false;
	}
	if (x=='B')
	{
		if (y=='A' || y=='C')
		{
			return true;
		}
		return false;
	}
	if (x=='C')
	{
		if (y=='B' || y=='A')
		{
			return true;
		}
		return false;
	}
	if (x=='D')
	{
		if (y=='F')
		{
			return true;
		}
		return false;
	}
	if (x=='F')
	{
		if (y=='D')
		{
			return true;
		}
		return false;
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	{
		f1=true;
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if (f1 && s1[0]==s2[0] && s1[1]==s2[1])
	{
		f2=true;
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if (f2 && check(s1[2],s2[2]))
	{
		f3=true;
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if (f3=true && abs(s1[2]-s2[2])==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
