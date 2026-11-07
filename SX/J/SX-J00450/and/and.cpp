#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, a[200005], ans;

inline bool cmp(int q, int b) {
	return q > b;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	ans = a[1];
	for (int i = 1; i <= m; i++) {
		ans = ans &a[i];
	}
	cout << ans;
	return 0;
}
//Trick||Treat!