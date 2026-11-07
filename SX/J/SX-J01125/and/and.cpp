#include <bits/stdc++.h>
using namespace std ;
long long n, m, a[200010], maxs = LLONG_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i & j > maxs)
					maxs = i & j;
			}
		}
		cout << maxs;
	}
	return 0;
}