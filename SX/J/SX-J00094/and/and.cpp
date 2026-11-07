#include <bits/stdc++.h>
using namespace std;
int a[210000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == m) {
		int min = 10000000;
		for (int i = 1; i <= n; i++) {
			if (a[i] < min) {
				min = a[i];
			}
		}
		cout << min;
		return 0;
	}
	if (m == 1) {
		int max = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] > max) {
				max = a[i];
			}
		}
		cout << max;
		return 0;
	}

	return 0;
}
