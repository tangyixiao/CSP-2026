#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
inline bool l(char c)
{
	return c=='A'||c=='B'||c=='C';
}
inline bool r(char c)
{
	return c=='D'||c=='F';
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	if(!(c1==c2))
	{
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(!(s1[0]==s2[0]&&s1[1]==s2[1]))
	{
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((l(s1[2])&&r(s2[2]))||(r(s1[2])&&l(s2[2])))
	{
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(l(s1[2])&&l(s2[2]))
	{
		if(abs(s1[2]-s2[2])==1)
			cout<<1;
		else
			cout<<0;
	}
	else if(r(s1[2])&&r(s2[2]))
	{
		if(abs(s1[2]-s2[2])==2)
			cout<<1;
		else
			cout<<0;
	}
	return 0;
}