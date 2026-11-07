#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200005], mx = 1;
bool vis[200005], flag;

void solve(int k) {
	int cnt = 0;
	if (k < 0) {
		cout << (1 << mx) - 1;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == true) {
			if (a[i] >= (1 << (k - 1))) {
				a[i] -= (1 << (k - 1));
				cnt++;
			}
			else vis[i] = false;
		}
	}
	if (cnt < m) {
		if (!flag) {
			for (int i = 1; i <= n; i++)
				vis[i] = true;
			solve(k - 1);
		}
		else cout << ((1 << mx) - (1 << k));
	} else {
		if (!flag) {
			mx = k;
			flag = true;
		}
		solve(k - 1);
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 30; j >= 0; j--)
			if (a[i] >= (1 << j)) {
				mx = max(mx, j + 1);
				break;
			}
	}
	for (int i = 1; i <= n; i++)
		vis[i] = true;
	solve(mx);
	return 0;
}