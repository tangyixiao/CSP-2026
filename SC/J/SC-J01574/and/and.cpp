#include<bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans;
int cnt, vis[200005];
void dfs(int p) {
	if (cnt == m) {
		int sum, pd = 0;
		for (int i = 1; i <= p; i++) {
			if (vis[i]) {
				if (pd == 0) {
					pd = 1;
					sum = a[i];
				}
				else {
					sum = sum & a[i];
				}
			}
		} 
		ans = max(ans, sum);
		return;
	}
	if (p == n + 1) {
		return;
	}
	vis[p] = 1;
	cnt++;
	dfs(p + 1);
	vis[p] = 0;
	cnt--;
	dfs(p + 1);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
	}
	else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
	}
	else if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans & a[i];
		}
	}
	else {
		dfs(1);
	}
	cout << ans;
	return 0;
}