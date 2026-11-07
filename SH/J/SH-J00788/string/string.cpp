#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s="";
ll n;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--)
	{
		int a;
		char c;
		cin>>a>>c;
		while(a--)
		{
			s+=c;
		}
	}
	ll cnt=0;
	for(ll i=0;i<(s.size()+1)/2;i++)
	{
		if(s[i]!=s[s.size()-i-1])cnt++;
	}
	cout<<cnt;
}
