#include <bits/stdc++.h>
using namespace std;
int x, y, n, m, a[200005];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[j] == a[i] && j != i) {
				cout << a[j];
				return 0;
			}
		}
	}

	return 0;
}
