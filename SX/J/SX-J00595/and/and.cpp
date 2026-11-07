#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
ll n, m, a[N], maxx;

void dfs(int pos, ll ans, int sum, bool f) {
	if (pos > n) {
		if (sum == 0)
			maxx = max(maxx, ans);
		return;
	}
	if (sum - 1 >= 0)
		dfs(pos + 1, (f == 0 ? a[pos] : ans & a[pos]), sum - 1, 1);
	dfs(pos + 1, ans, sum, f);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1, 0, m, 0);
	cout << maxx;
	return 0;
}
