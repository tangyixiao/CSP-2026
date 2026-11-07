#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, maxx = LLONG_MIN, t;
int a[N], vis[N], b;

int print(int a1, int c) {
	return a1 &c;
}

void dfs(int k, int s) {
	if (k == m + 1) {
		maxx = max(maxx, 1ll * s);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			if (k == 1) {
				dfs(k + 1, a[i]);
			} else {
				b = print(s, a[i]);
				dfs(k + 1, b);
			}
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
		dfs(1, 0);
		cout << maxx;
	} else if (m == 1) {
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, 1ll * a[i]);
		}
		cout << maxx;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[i] != a[j]) {
					t = print(a[i], a[j]);
					maxx = max(maxx, t);
				}
			}
		}
		cout << maxx;
	} else if (m == n) {
		maxx = a[1];
		for (int i = 2; i <= n; i++) {
			maxx = print(maxx, a[i]);
		}
		cout << maxx;
	}
	return 0;
}
