#include<bits/stdc++.h>
using namespace std;
inline bool p(char a,char b)
{
	long long a1,a2;
	if(a=='A'||a=='B'||a=='C')
	{
		a1=1;
	}
	if(a=='D'||a=='F')
	{
		a1=2;
	}
	if(b=='A'||b=='B'||b=='C')
	{
		a2=1;
	}
	if(b=='D'||b=='F')
	{
		a2=2;
	}
	if(a1==a2)
	return 1;
	else
	return 0;
}
inline bool o(char a,char b)
{
	long long aa1=int(a);
	long long bb1=int(b);
	if(abs(a-b)==1)
	return 1;
	else
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1;
	string a2,b2;
	cin>>a1>>b1>>a2>>b2;
	if(a1!=a2)
	{
		cout<<0<<0<<0<<0<<'\n';
		return 0;
	}
	for(long long i=0;i<2;i++)
	{
		if(b1[i]!=b2[i])
		{
			cout<<1<<0<<0<<0<<'\n';
			return 0;
		}
	}
	char aa,bb;
	aa=b1[2];
	bb=b2[2];
	if(!p(aa,bb))
	{
		cout<<1<<1<<0<<0<<'\n';
		return 0;
	}
	if(!o(aa,bb))
	{
		cout<<1<<1<<1<<0<<'\n';
		return 0;
	}
	cout<<1<<1<<1<<1<<'\n';
	return 0;
}
