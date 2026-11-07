#include <bits/stdc++.h>
using namespace std;
int n, m, f[200005], a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	f[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= 1; j--) {
			f[j] = max(f[j - 1] & a[j], f[j]);
		}
	}
	cout << f[m];
	return 0;
}
