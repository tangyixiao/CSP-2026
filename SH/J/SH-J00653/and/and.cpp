#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
int n, m;
ll ans = 0;
ll a[N] = {};
bool vis[N] = {};
void dfs(int cnt, ll nowans) {
	if (cnt == m) {
		ans = max(ans, nowans);
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 1) {
			continue;
		}
		vis[i] = 1;
		dfs(cnt + 1, nowans & a[i]);
		vis[i] = 0;
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		vis[i] = 1;
		dfs(1, a[i]);
		vis[i] = 0;
	}
	cout << ans;
	return 0;
}
