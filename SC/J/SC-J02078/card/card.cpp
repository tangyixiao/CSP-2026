#define ll long long
#define N 200005
#define _up(i, a, b, c) for (ll i = a; i <= b; i += c)
#define up(i, a, b) _up(i, a, b, 1)
#define _dn(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define dn(i, a, b) _dn(i, a, b, 1)
ll n, m, cnt, a[N], st[N], mp[N], ans[N];
#include <bits/stdc++.h>
using namespace std;

void init() {
	cin >> n >> m;

	up (i, 1, n) {
		cin >> a[i];
	}
}

void solve() {
	up (i, 1, n) {
		memset(st, 0, sizeof st);
		memset(mp, 0, sizeof mp);
		cnt = 0;

		up (j, i, n) {
			if (mp[a[j]] == 0) {
				st[++cnt] = a[j];
				mp[a[j]] = cnt;
			} else {
				up (k, mp[a[j]] + 1, cnt) {
					mp[st[k]] = 0;
					st[k] = 0;
				}
				cnt = mp[a[j]];
				st[cnt] = a[j];
			}
		}

		up (j, 1, cnt) {
			ans[st[j]]++;
		}
	}

	up (i, 1, m) {
		cout << ans[i] << ' ';
	}
}

int main() {
	freopen("card.in", "r", stdin);
//	freopen("card1.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	init(), solve();
	return 0;
}