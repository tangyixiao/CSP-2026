#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll a,n,ans;
string s=" ";
char c;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin>>n;

	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(ll j=1;j<=a;j++)s+=c;
	}
	ll sl=s.size();
	
	for(ll i=1;i<=(n+1)/2;i++)
	{
		if(s[i]!=s[sl-i])ans++;
	}
	
	cout<<ans<<endl;

	return 0;
}
