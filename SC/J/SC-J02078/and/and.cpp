#define ll long long
#define N 200005
#define _up(i, a, b, c) for (ll i = a; i <= b; i += c)
#define up(i, a, b) _up(i, a, b, 1)
#define _dn(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define dn(i, a, b) _dn(i, a, b, 1)
ll n, m, ans, a[N], pre[N], nex[N];
ll mp[N];
#include <bits/stdc++.h>
using namespace std;

void init() {
	cin >> n >> m;

	up (i, 1, n) {
		cin >> a[i];
	}
}

ll lowbit(ll x) {
	return x & -x;
}

bool bf[N];

void solve() {	
	if (n <= 20) {
		up (i, n - m + 1, n) {
			bf[i] = 1;
		}

		do {
			ll tans = 0, p = 0;
			up (i, 1, n) {
				if (bf[i]) {
					if (p == 0) {
						tans = a[i];
						p = 1;
					} else {
						tans &= a[i];
					}
				}
			}
			ans = max(tans, ans);
		} while (next_permutation(bf + 1, bf + n + 1));

		cout << ans << '\n';
		return;
	}

	if (m == 1) {
		ll _m = a[1];
		up (i, 2, n) {
			_m = max(_m, a[i]);
		}
		cout << _m;
		return ;
	}

	if (m == n) {
		ll _m = a[1];
		up (i, 2, n) {
			_m &= a[i];
		}
		cout << _m;
		return ;
	}

	if (n <= 2000 && m == 2) {
		ll _m = -1e9;
		up (i, 1, n) {
			up (j, 1, n) {
				if (i != j) {
					_m = max(_m, a[i] & a[j]);
				}
			}
		}
		cout << _m;
		return;
	}

	if (m == n - 1) {
		pre[1] = a[1];
		up (i, 2, n) pre[i] = pre[i - 1] & a[i];

		nex[n] = a[n];
		dn (i, n - 1, 1) nex[i] = nex[i + 1] & a[i];

		ll res = max(pre[n - 1], nex[2]);

		up (i, 2, n - 1) {
			res = max (res, pre[i - 1] & nex[i + 1]);
		}

		cout << res;
		return;
	}

	bool fl = 1;
	up (i, 1, n) {
		if (lowbit(a[i] + 1) != a[i] + 1) {
			fl = 0;
		}
	}
	
	if (fl == 1) {
		sort(a + 1, a + n + 1, greater<ll>());
		ll res = a[1];
		up (i, 2, m) {
			res &= a[i];
		}
		cout << res;
		return ;
	}
	
	bool fl2 = 1;
	if (lowbit(n) == n) {
		fl2 = 0;
	}
	
	up (i, 1, n) {
		if (a[i] != i - 1) {
			fl2 = 0;
		}
	}
	
	if (fl2) {
		ll o = n / 2, ans = 0;
		while (m <= o) {
			ans += o;
			o >>= 1;
		}
		cout << ans;
		return ;
	}
	
	ll _max = 0;
	up (i, 1, n) {
		_max = max(_max, a[i]);
	}
	
	if (_max < 4) {
		up (i, 1, n) {
			mp[a[i]]++;
		}
		
		if (m <= mp[3]) {
			cout << 3;
		} else if (m <= mp[3] + mp[2]) {
			cout << 2;
		} else if (m <= mp[3] + mp[1]) {
			cout << 1;
		} else {
			cout << 0;
		}
		return;
	}
}

int main() {
	freopen("and.in", "r", stdin);
//	freopen("and5.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	init(), solve();
	return 0;
}