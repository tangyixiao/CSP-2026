#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005];
long long ans;

void dfs(long long num, long long sum, long long res) {
	if (sum == m) {
		ans = max(ans, res);
		return;
	}
	if (num > n || (m - sum) > (n - num + 1))
		return ;
	dfs(num + 1, sum, res);
	dfs(num + 1, sum + 1, res == 0 ? a[num] : res &a[num]);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1, 0, 0);
	cout << ans;
	return 0;
}
