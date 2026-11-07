#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[200002];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int maxx = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int o = 0;
			if (i != j) {
				o = (a[i] & a[j]);
			}
			maxx = max(o, maxx);
		}
	}
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
	}
	if (m == 2) {
		cout << maxx;
	}
	return 0;
}
