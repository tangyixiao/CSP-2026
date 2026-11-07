#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 5];
	int tot[m + 5];
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	for (int i = n; i >= 1; i --) {
		int v = 0, vt[m + 5], top = 1;
		for (int j = 1; j <= i; j ++) {
			v = a[i];
			for (int k = 1; k <= m + 5; k ++) {
				if (vt[k] == v) {
					top = 1;
				} else {
					vt[top] = v;
					top ++;
				}
			}
		}
		for (int j = 1; j <= m; j ++) {
			if (vt[j] != 0)
				tot[j] ++;
		}
	}

	for (int i = 1; i <= n; i ++) {
		cout << a[i];
	}
	return 0;
}
