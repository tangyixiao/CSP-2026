#include<bits/stdc++.h>
using namespace std;

long long a[200005], ans;
int n, m;
bool vis[200005];

void dfs(int step) {
	if (step == m) {
		long long res = 0;
		for (int i = 1; i <= n; i++)
			if (vis[i]) {
				if (res == 0) res = a[i];
				else res &= a[i];
			}
		ans = max(ans, res);
	} 
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			vis[i] = true;
			dfs(step + 1);
			vis[i] = false;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	dfs(0);
	cout << ans << endl;
	return 0;
}
