#include <bits/stdc++.h>

#define int long long
using namespace std;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	vector<int> f(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		f[i] = a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j <= m; j++) {
			f[j] = max(f[j], (f[(j - 1) & a[i - 1]] & a[i]) - 1);
		}
	}
	cout << f[n];


	return 0;
}
