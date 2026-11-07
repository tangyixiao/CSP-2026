#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200000 + 5], maxn = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			maxn = max(maxn, (a[i] & a[j]));
		}
	}
	m--;
	long long t = maxn;
	maxn = 0;
	while (m > 0) {
		for (int i = 1; i <= n; i++) {
			maxn = max(maxn, (a[i] & t));
		}
		t = maxn;
		m--;
	}
	cout << maxn;
	return 0;
}
