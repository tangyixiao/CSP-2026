#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll ans=0;
	while(n--)
	{
		ll a;
		char b;
		cin>>a>>b;
		while(a--)
		{
			s=s+b;
		}
	}
	int l=0,r=s.size()-1;
	while(l<=r)
	{
		if(s[l]!=s[r]) ans++;
		l++,r--;
	}
	cout<<ans;
	return 0;
}