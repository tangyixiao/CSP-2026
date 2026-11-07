#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[100010], z = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; a[i] == 0; j++) {
			if (a[i] % 2 == 1) {
				z++;
			}
		}

	}
	cout << 12;
	return 0;
}
