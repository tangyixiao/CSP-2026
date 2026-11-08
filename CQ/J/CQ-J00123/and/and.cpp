#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAXN = 2e5 + 5;
int n, m, a[MAXN], ans;
bool vis[MAXN];
void DFS(int x, int val) {
	if (x == m) {
		ans = max(ans, val);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		vis[i] = true;
		if (x == 0) {
			val = a[i];
		}
		DFS(x + 1, val & a[i]); 
		vis[i] = false;
	}
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	DFS(0, 0);
	cout << ans;
	return 0;
}
