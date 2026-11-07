#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200010],f[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll ans = 0;
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	ll n,m;
	cin >> n >> m;
	for (ll i = 1;i <= n;i++)
		f[i] = 1;
	for (ll i = 1;i <= n;i++)
		cin >>a[i];
	for (ll b = 29;b >= 0;b--)
	{
		ll cnt = 0;
		for (ll i = 1;i <= n;i++)
			if(((a[i] >> b) & 1) && f[i])
				cnt++; 
		if(cnt >= m)
		{
			for (ll i = 1;i <= n;i++)
				if(((a[i] >> b) & 1) != 1)
					f[i] = 0;
			ans |= (1 << b);
		}
	}
	cout << ans;
	return 0;
 } 
