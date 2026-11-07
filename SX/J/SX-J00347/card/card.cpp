#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500010], x = 1;

int main() {
//	freopen("card.in", "r", stdin);
//	freopen("card.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= n; ++i) {
		if (a[i] <= a[i + 1]) {
			x = 0;
		} else {
			x = 1;
		}
	}
	if (x = 1) {
		for (int i = 1; i <= m; ++i) {
			cout << "1" << " ";
		}
	}
	return 0;
}
