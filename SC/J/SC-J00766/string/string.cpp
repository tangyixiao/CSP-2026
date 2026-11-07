#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	ll ans=0;
	string s="";
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		string c;
		ll a;
		cin>>a>>c;
		for(ll i=1;i<=a;i++)
		{
			s+=c;
		}
	}
	ll len=s.length();
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-1-i])ans++;
	}
	cout<<ans<<endl;
	return 0;
}
