#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500010], b[500010], k, k1, k2;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (i == a[n]) {
			b[i] = n;
		}
	}

	return 0;
}