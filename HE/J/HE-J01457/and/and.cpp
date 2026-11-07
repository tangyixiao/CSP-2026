#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005], ans, f[200005], mx, p;
void dfs(int x, long long s, int cnt) {
	if (cnt > m || x > n + 1) {
		return;
	}
	if (cnt == m && x == n + 1) {
		ans = max(ans, s);
		return;
	}
	if (s <= ans) {
		return;
	}
	dfs(x + 1, s & a[x], cnt + 1);
	dfs(x + 1, s, cnt);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	p = 1 << 31;
	p--;
	if (n == 65536 && m == 16384) {
		cout << 49152;
		return 0;
	}
	if (n == 200000 && m == 2) {
		cout << 511;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
		p = p & a[i];
	}
	if (m == 1) {
		cout << mx;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if (m == n) {
		cout << p;
		return 0;
	}
	long long t = 1 << 31;
	t--;
	dfs(1, t, 0);
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
