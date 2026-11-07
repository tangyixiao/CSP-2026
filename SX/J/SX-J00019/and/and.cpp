#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[1000000], maxn = 0;
	cin >> n >> m;
	int i;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << a[i];
		return 0;
	}
	if (m == 1) {
		for (int j = 1; j <= i; j++) {
			if (a[i] > maxn) {
				maxn = a[i];
			}
		}
		cout << maxn;
	}
	return 0;
}
