#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], r[300005], s[300005], sum;
int f[500005], ans[300005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		++r[a[i]];
	}
	for (int i = 1; i <= n; i++) {
		--r[a[i]];
		if (r[a[i]] == 0) sum -= s[a[i]];
		f[i] = i - sum;
		s[a[i]] += f[i];
		sum += f[i];
		if (r[a[i]] == 0) sum -= f[i];
		ans[a[i]] = f[i];
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
