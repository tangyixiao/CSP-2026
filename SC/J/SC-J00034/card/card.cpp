#include"bits/stdc++.h"
using namespace std;
const int N = 5e5 + 5;
int n, m, a[N];
int last[N];
int ans[N];
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		last[a[i]] = i;
	}
	bool p = 1;
	for (int i = 1; i < n; i++)
		if (a[i] > a[i + 1]) {
			p = 0;
			break;
		}
	if (p) {
		for (int i = 1; i <= n; i++) {
			int j = i;
			for (; j <= n && a[i] == a[j]; j++);
			i = j - 1;
			cout << i << ' ';
		}
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		int j = i;
		while (j <= n) {
			ans[a[j]]++;
			j = last[a[j]] + 1;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}