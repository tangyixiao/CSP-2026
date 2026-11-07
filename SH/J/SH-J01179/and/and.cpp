#include <bits/stdc++.h>
using namespace std;
int ok;
int n, a[200005], ans, maxn = INT_MIN, t, m, vis[200005], old;
int dfs(int dep, int ans) {
	if (dep > m) maxn = max(maxn, ans);
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		else {
			vis[i] = 1;
			if (dep = 1) {
				ans = a[i];
			} else {
				ans &= a[i];
			}
			dfs(dep + 1, ans);
			vis[i] = 0;
		}
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	cin >> a[1];
	ans = a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn, a[i]);
		if (a[i] != i - 1) {
			ok = 1;
		}
	}
	if (m == 1) {
		cout << maxn << endl;
		return 0;
	}
	if (!ok) {
		cout << 0;
		return 0;
	}
//	if (n > 20) {
		maxn = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				t = a[i] & a[j];
				if (t > maxn) {
					vis[i] = 1;
					vis[j] = 1;
					maxn = t;
				}
			}
		}
		m -= 2;
		old = maxn;
		while(m--) {
			maxn = 0;
			for (int i = 1; i <= n; i++) {
				if (vis[i]) continue;
				t = old & a[i];
				if (t > maxn) {
					maxn = t;
					vis[i] = 1;
				}
			}
			old = maxn;
		}
		cout << maxn << endl;
	//	fclose(stdin);
	//	fclose(stdout);
//	} else {
//		dfs(0, 0);
//		cout << maxn;
//	}
    return 0;
}
/*
5 3
31 3 1 15 7
*/ 
