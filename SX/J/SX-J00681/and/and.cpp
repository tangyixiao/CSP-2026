#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000000];
int b[1000000];
int mx;

void dfs(int nw, int sum, int ci) {
	//cout << mx << " " << sum << endl;
	if (ci == m) {
		mx = max(mx, sum);
		return ;
	}
	if (nw > n) {
		return ;
	}
	if (ci == 0) {
		dfs(nw + 1, a[nw], ci + 1);
	} else {
		dfs(nw + 1, (sum &a[nw]), ci + 1);
	}
	dfs(nw + 1, sum, ci);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			mx = max(mx, a[i]);
		}
		cout << mx;
		return 0;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j)
					continue;
				mx = max(mx, (a[i] & a[j]));
			}
		}
		cout << mx;
		return 0;
	} else if (m == n) {
		mx = a[1];
		for (int i = 2; i <= n; i++) {
			mx &= a[i];
		}
		cout << mx;
		return 0;
	} else {
		dfs(0, 0, 0);
		cout << mx;
		return 0;
	}
	return 0;
}


