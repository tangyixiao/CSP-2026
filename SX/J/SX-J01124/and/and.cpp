#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200010], vis[200010], ans, sum;

void dfs(int now, long long sum) {
	if (now > m) {
		ans = max(ans, sum);
		return;
	}
	for (int i = now - 1; i < n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			if (now == 1)
				dfs(now + 1, a[i]);
			else
				dfs(now + 1, sum & a[i]);
			vis[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	int max1, max2;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		}
	}
	sort(a, a + n);
	if (n > 2000) {
		ans = a[n - 1];
		int flag = 0;
		for (int i = 2; i <= m && flag + i <= n; i++) {
			while (ans & i == 0)
				flag++;
			ans &= a[n - i - flag];
		}
		cout << ans;
		return 0;
	}
	dfs(1, 111);
	cout << ans;
	return 0;
}