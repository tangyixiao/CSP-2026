#include <bits/stdc++.h>
using namespace std;

int n, m, a[] = {n};

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	int maxI = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i] - a[j] == m || a[j] - a[i] == m) {
				maxI = a[i] & a[j];
			}
		}
	}
	cout << maxI;

	return 0;
}
