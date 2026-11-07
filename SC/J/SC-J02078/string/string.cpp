#define ll long long
#define N 200005
#define _up(i, a, b, c) for (ll i = a; i <= b; i += c)
#define up(i, a, b) _up(i, a, b, 1)

ll n, ans, len, a[N];
char c[N], s[N];
#include <bits/stdc++.h>
using namespace std;

void init() {
	cin >> n;

	up (i, 1, n) {
		cin >> a[i] >> c[i];
	}
}

void solve() {
	up (i, 1, n) {
		up (j, 1, a[i]) {
			s[++len] = c[i];
		}
	}

	up (i, 1, len / 2) {
		if (s[i] != s[len - i + 1]) {
			ans++;
		}
	}
	
	cout << ans;
}

int main() {
	freopen("string.in", "r", stdin);
//	freopen("string2.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	init(), solve();
	return 0;
}