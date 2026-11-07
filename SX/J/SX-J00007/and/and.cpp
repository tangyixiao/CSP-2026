#include <bits/stdc++.h>
using namespace std;
int a[2005];
int ans;
int n, m;
bool vis[25];

void dfs(int s, int step, int q) {

	if (step == m ) {
		//cout << q << " ";
		ans = max(ans, q);
		return;
	}
	for (int i = s; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			//cout << i << " ";
			dfs(i, step + 1, q &a[i]);
			vis[i] = 0;
		}
	}

}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n <= 20) {
		for (int j = 1; j <= n; j++) {
			vis[j] = 1;
			//cout << j << " ";
			dfs(j, 1, a[j]);
			vis[j] = 0;
		}
		cout << ans << endl;
		return 0;
	} else {
		if (m == 1) {
			for (int i = 1; i <= n; i++) {
				ans = max(ans, a[i]);
			}
		}
		if (m == 2) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					if (i != j)
						ans = max(ans, a[i] & a[j]);
				}
			}
		}
		if (m == n) {
			ans = a[1];
			for (int i = 2; i <= n; i++) {
				ans = ans &a[i];
			}
		}
		cout << ans << endl;
		return 0;
	}
	return 0;
}