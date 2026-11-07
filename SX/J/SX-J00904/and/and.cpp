#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long ma[200005], s[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, ma = 0, s = 0, x = 0;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		ma[a[i]] = a[i];
	}
	int j = 0;
	for (int i = 200005; j <= m; i--) {
		if (ma[i] != 0) {
			s[j] = ma[i];
			j++;
		}
	}
	for (int i = 1; i < m; i += 2) {
		x += s[i] & s[i + 1];
	}
	cout << x;
	return 0;
}
