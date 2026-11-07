#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
int n, m, a[N], sum, maxx, v[N];

inline void dfs(int step, int sum) {
	if (step == m + 1) {
		maxx = max(maxx, sum);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == 0) {
			v[i] = 1;
			dfs(step + 1, (sum &a[i]));
			v[i] = 0;
		}
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	sum = pow(2, 31) - 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
		sum = (sum &a[i]);
	}
	if (m <= 20) {
		maxx = 0;
		int x = pow(2, 31) - 1;
		dfs(1, x);
	}
	if (m == n) {
		cout << sum;
		return 0;
	}
	cout << maxx;

	return 0;

}
