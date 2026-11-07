#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+9;
int a[N], b[N], ans[N], vis[N], k[N];
vector<int>v[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	bool t = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i + 1])
			t = 1;
		k[a[i]] = i;
	}
	if (t == 0) {
		for (int i = 1; i <= m; i++)
			cout << k[i] << ' ';
		return 0;
	}
	if (m == 2) {
		if (a[n] == 1) {
			for (int i = 1; i <= n; i++) {
				if (a[i] == 2)
					ans[2]++;
			}
			cout << n << ' ' << ans[2];
		} else {
			for (int i = 1; i <= n; i++) {
				if (a[i] == 1)
					ans[1]++;
			}
			cout << ans[1] << ' ' << n;
		}
		return 0;
	}
	if (m == 1) {
		cout << n;
		return 0;
	}
	for (int l = 1; l <= n; l++) {
		stack<int>sk;
		for (int i = 1; i <= m; i++)
			vis[i] = 0;
		for (int r = l; r <= n; r++) {
			if (vis[a[r]] == 1) {
				while (sk.top() != a[r] && !sk.empty())
					sk.pop();
			} else {
				sk.push(a[r]);
				vis[a[r]] = 1;
			}
		}
		while (!sk.empty()) {
			int x = sk.top();
			ans[x]++;
			//cout << x << ' ';
			sk.pop();
		}
		//cout << '\n';
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}