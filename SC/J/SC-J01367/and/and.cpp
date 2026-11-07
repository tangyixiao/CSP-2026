#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5, MN = INT_MIN, MX = INT_MAX;
int n, m, ans, t, a[N], vis[N];
void dfs(int m, int s) {
	if (t >= 1e7) {
		if (m == 0)
			ans = max(s, ans);
		cout << ans;
		t = MX;
		exit(0);
	}
	if (m == 0) {
		ans = max(s, ans);
		return ;
	}
	for (int i = 0 ; i < n ; i++) {
		t++;
		if (vis[i] == 1)
			continue;
		vis[i] = 1;
		if (s == 0)
			dfs(m - 1, a[i]);
		else
			dfs(m - 1, a[i] & s);
		vis[i] = 0;
	}
}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++)
		scanf("%lld", &a[i]);
	if (m == 1) {
		int mx = MN;
		for (int i = 0 ; i < n ; i++) 
			mx = max(mx, a[i]);
		cout << mx;
	} 
	else if (m == n) {
		ans = a[0];
		for (int i = 1 ; i < n ; i++)
			ans &= a[i];
		cout << ans;
	} else {
		dfs(m, 0);
		cout << ans;
	}
	return 0;
}
