#include <bits/stdc++.h>
using namespace std;

namespace Carrot {
	using ll = long long;
	ll n, ans, a[200005];
	char c[200005];
	
	void anss()
	{
		cin >> n;
		for(ll i = 1ll; i <= n; i ++) cin >> a[i] >> c[i];
		ll l = 1, r = n;
		while(l < r)
		{
			if(c[l] != c[r]) ans += min(a[l], a[r]);
			if(a[l] == a[r]) r --, l ++;
			else if(a[l] > a[r]) a[l] -= a[r--];
			else if(a[r] > a[l]) a[r] -= a[l++];
		}
		cout << ans;
	}
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	Carrot::anss();
	
	return 0;
}
