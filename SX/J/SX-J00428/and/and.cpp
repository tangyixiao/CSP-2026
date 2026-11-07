#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	int fg = a[1];
	if (m == n) {
		for (int i = 2; i <= n; i++) {
			fg &= a[i];
		}
		cout << fg;
		return 0;
	}
	int maxn = -1;
	if (m == 2) {
		for (int i = n; i >= 2; i--) {
			for (int j = i - 1; j >= 1; j--) {
				if (a[i]&a[j] > maxn)
					maxn = a[i] & a[j];
			}
		}
		cout << maxn;
		return 0;
	}
	maxn = -1;
	if (m == 3) {
		for (int i = n; i >= 3; i--) {
			for (int j = i - 1; j >= 2; j--) {
				for (int k = j - 1; k >= 1; k--) {
					if (a[i]&a[j]&a[k] > maxn)
						maxn = a[i] & a[j] & a[k];
				}
			}
		}
		cout << maxn;
		return 0;
	}
	maxn = -1;
	if (m == 4) {
		for (int i = n; i >= 4; i--) {
			for (int j = i - 1; j >= 3; j--) {
				for (int k = j - 1; k >= 2; k--) {
					for (int h = k - 1; h >= 1; h--) {
						if (a[i]&a[j]&a[k]&a[h] > maxn)
							maxn = a[i] & a[j] & a[k] & a[h];
					}
				}
			}
		}
		cout << maxn;
		return 0;
	}
	return 0;
}
