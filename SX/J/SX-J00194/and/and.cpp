#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], maxn = 0x3f3f3f3f;
bool vis[200005];

void dfs(int f int i) {
	if (f > m)
		return;
	if (vis[])
	}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxn = max(maxn, a[i] & a[j]);
			}
		}
	} else {
		sort(a + 1, a + 1 + n);
		for (int i = n; i >= n - m + 1; i--) {
			if (i == n) {
				maxn = a[i];
			} else {
				maxn &= a[i];
			}
		}
	}

	cout << maxn;
	return 0;
}
