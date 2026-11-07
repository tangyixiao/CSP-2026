#include"bits/stdc++.h"
using namespace std;
const int N = 2e5 + 5;
int n, m, a[N];
int cnt[32];
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 30; ~j; j--)
			if ((a[i] >> j) & 1)
				cnt[j]++;
	}
	int mx = -1;
	for (int j = 30; ~j; j--)
		if (cnt[j] >= m) {
			mx = j;
			break;
		}
	if (mx == -1) {
		cout << 0;
		return 0;
	}
	vector<int>b;
	for (int i = 1; i <= n; i++)
		if ((a[i] >> mx) & 1)
			b.push_back(a[i]);
	for (int j = mx - 1; ~j; j--) {
		int cnt = 0;
		for (int i : b)
			if ((i >> j) & 1)
				cnt++;
		if (cnt < m)
			continue;
		vector<int>nxt;
		for (int i : b)
			if ((i >> j) & 1)
				nxt.push_back(i);
		b = nxt;
	}
	int ans = b[0];
	for (int i = 1; i < m; i++)
		ans &= b[i];
	cout << ans;
	return 0;
}