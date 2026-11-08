#include <bits/stdc++.h>
using namespace std;

namespace Carrot {
	using ll = long long;
	ll n, m;
	ll a[200005], f[200005];
	
	void read()
	{
		cin >> n >> m;
		memset(f, -1, sizeof(f));
		for(ll i = 1; i <= n; i ++) cin >> a[i];
		for(ll i = 1; i <= n; i ++)
			for(ll j = min(m, i); j; j --)
				f[j] = max(f[j], f[j-1] & a[i]);
		cout << f[m];
	}
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	Carrot::read();
	
	return 0;
}
