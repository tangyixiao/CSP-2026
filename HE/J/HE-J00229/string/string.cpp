#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+50;
string s;ll ans=0,n;
ll huiwen(string s)
{
	string a="";
	for(int i=s.size()-1;i>=0;i--)
		a+=s[i];
	if(a==s)
	{
		return 0;
	}
	ll l=0,r=s.size()-1;
	while(l<r)
	{
		if(s[l]!=s[r])
		{
			ans++;
			l++;r--;
		}
	}
	return ans;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ll a;char b;
		cin>>a>>b;
		while(a)
		{
			s+=b;
			a--;
		}
	}
	cout<<huiwen(s);
	return 0;
}
