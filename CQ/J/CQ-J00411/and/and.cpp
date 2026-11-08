#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;
ll a[N];
bool vis[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m; cin >>n>>m;
	for (ll i=1;i<=n;i++) cin >>a[i];
	ll ans=0;
	memset(vis,1,sizeof vis);
	for (ll k=31;k>=1;k--)
	{
		ll cnt=0;
		for (ll i=1;i<=n;i++)
		{
			if (!vis[i]) continue;
			if (((a[i]>>(k-1))&1)) cnt++;
		}
		if (cnt>=m)
		{
			ans+=(1<<(k-1));
			for (ll i=1;i<=n;i++)
			{
				if (!vis[i]) continue;
				if (!((a[i]>>(k-1))&1)) vis[i]=0;
			} 
		}
	}
	cout <<ans;
	return 0;
 }
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
