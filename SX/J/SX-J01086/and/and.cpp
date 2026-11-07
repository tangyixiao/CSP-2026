#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N], power[50];
bool vis[N];
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	power[0] = 1;
	for (int i = 1; i <= 30; i++) power[i] = power[i - 1] * 2;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort (a + 1, a + n + 1, greater<int>());
	int res = power[30] - 1;
	for (int i = 1; i <= n; i++) {
		int id = lower_bound(power + 1, power + 30 + 1, a[i]) - power;
		if (a[i] == power[id] && m == 1) res &= a[i], m--, vis[i] = 1;
		if (a[i] != power[id] && m) res &= a[i], m--, vis[i] = 1;
	}
	cout << (res == power[30] - 1 ? 0 : res);
	return 0;
}
