#include <bits/stdc++.h>
using namespace std;

long long tests = 1;

constexpr int N = 2e1 + 10;

int n, m, a[200010];

vector<int> path;
int mx = -1, vis[N];

void dfs(int u, int r) {
	if (r == m) {
		int res = path[1];
		for (int i = 1; i <= m; i++) {
			res &= path[i - 1];
		}
		mx = max(mx, res);
		return;
	}
	for (int i = u; i <= n; i++) {
		path.push_back(a[i]);
		vis[i] = true;
		dfs(i + 1, r + 1);
		path.pop_back();
		vis[i] = false;
	}
}

void case_() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	if (n <= 20) {
		dfs(1, 0);
		cout << mx;
	} else if (n <= 2000) {
		if (m == 1) {
			for (int i = 1; i <= n; i++) {
				mx = max(mx, a[i]);
			}
			cout << mx;
		} else if (m == 2) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					mx = max(mx, a[i] & a[j]);
				}
			}
			cout << mx;
		} else {
			mx = a[i];
			for (int i = 1; i <= n; i++) {
				mx &= a[i];
			}
			cout << mx;
		}
	} else {
		if (m == n - 1) {
			int res = 2147483647;
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					if (i != j)
						res &= a[j];
				}
				res = 2147483647;
				mx = max(mx, res);
			}
		} else {
			mx = a[i];
			sort(a, a + n, greater<int>());
			for (int i = 1; i <= m; i++) {
				mx &= a[i];
			}
		}

		cout << mx;
	}
}

int main() {
	freopen("and.in", "r", stdin);
//	freopen("name0.in", "r", stdin);
	freopen("and.out", "w", stdout);

//	cin >> tests;
	while (tests--) {
		case_();
	}

	return 0;
}