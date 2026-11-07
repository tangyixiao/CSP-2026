#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e6 + 10;
ll a[N], n, m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(ll i = 1;i <= n;++i)
	{
		cin >> a[i];
		if(a[i] == 0){cout << 0;return 0;}
	}
	if(m == 1)
	{
		ll maxn = INT_MIN;
		for(ll i = 1;i <= n;++i)
			maxn = max(maxn, a[i]);
		cout << maxn;
		return 0;
	}
	if(m == n)
	{
		ll ans = a[1];
		for(ll i = 2;i <= n;++i)ans = (ans & a[i]);
		cout << ans;
		return 0;
	}
	if(m == 2)
	{
		ll maxn = INT_MIN;
		for(ll i = 1;i <= n;++i)
			for(ll j = i;j <= n;++j)
				if(i != j)
					maxn = max((a[i] & a[j]), maxn);
		cout << maxn;
		return 0;
	}
	return 0;
}
