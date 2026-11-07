#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,ans,maxx=1145141919810;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll x;
		char c;
		cin>>x>>c;
		for(ll j=1;j<=x;j++)
			s+=c;
	}
	n=s.size();
	if(s.size()%2==1)
	{
		string l=s.substr(0,n/2),r=s.substr(n/2,n/2);
		string ss,sss;
		sss=l;reverse(sss.begin(),sss.end());
		ss=l+s[n/2+1]+sss;
		for(ll i=0;i<n;i++)
			if(s[i]!=ss[i])
				ans++;
		maxx=min(maxx,ans);
		sss=r;reverse(sss.begin(),sss.end());
		ss=sss+s[n/2+1]+r;
		for(ll i=0;i<n;i++)
			if(s[i]!=ss[i])
				ans++;
		maxx=min(maxx,ans);
		cout<<maxx;
		return 0;
	}
	else
	{
		string l=s.substr(0,n/2),r=s.substr(n/2,n/2);
		string ss,sss;
		sss=l;reverse(sss.begin(),sss.end());
		ss=l+sss;
		for(ll i=0;i<n;i++)
			if(s[i]!=ss[i])
				ans++;
		maxx=min(maxx,ans);
		sss=r;reverse(sss.begin(),sss.end());
		ss=sss+r;
		for(ll i=0;i<n;i++)
			if(s[i]!=ss[i])
				ans++;
		maxx=min(maxx,ans);
		cout<<maxx;
		return 0;
	}
	return 0;
}
/*
[70,85)
*/