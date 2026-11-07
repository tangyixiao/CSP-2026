#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);

	int n, m, a[1000005];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int max = a[1];
	for (int i = 1; i <= n; i++) {
		if (a[i] >= max) {
			max = a[i];
		}
	}
	cout << max;
	return 0;
}
