#include <bits/stdc++.h>
using namespace std;
int n, m, a[200100], ans = 1;

bool cmp(int q, int w) {
	return q > w;
}

int ad(int p, int o) {
	while (p) {
		if (p % 2 == 0) {
			p /= 2;
		}
	}
	return p;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= m; i++) {
		ans = a[i];
	}
	cout << ans;
	return 0;
}