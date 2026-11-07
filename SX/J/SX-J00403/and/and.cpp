#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, maxn = 0, w;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		//	maxn = max(a[i], maxn);
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			maxn = max(a[i], maxn);
		}
		cout << maxn;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1 ; j <= n; j++) {
			w = (a[i] & a[j]);
			if (w > maxn)
				maxn = w;
		}
	}
	cout << maxn;
	return 0;
}
