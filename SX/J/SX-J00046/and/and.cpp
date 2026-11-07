#include <bits/stdc++.h>
using namespace std;
long long n, m, num, d;
long long a[100005];

int main() {

	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		d = max(d, a[i]);
	}
	if (m == 1) {
		cout << d;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				num = max((a[i] & a[j]), num);
				cout << a[i] << " " << a[j] << endl;
			}

		}
	}
	if (m == 3) {
		for (int i = 1; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k <= n; k++) {
					num = max((a[i] & a[j] & a[k]), num);
				}
			}
		}
	}
	if (m == 4) {
		for (int i = 1; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				for (int k = j + 1; k < n; k++) {
					for (int s = k + 1; s <= n; s++) {
						num = max((a[i] & a[j] & a[k] & a[s]), num);
					}
				}
			}
		}
	}
	if (m == 5) {
		for (int i = 1; i < n - 3; i++) {
			for (int j = i + 1; j < n - 2; j++) {
				for (int k = j + 1; k < n - 1; k++) {
					for (int s = k + 1; s < n; s++) {
						for (int h = s + 1; h <= n; h++)
							num = max((a[i] & a[j] & a[k] & a[s] & a[h]), num);
					}
				}
			}
		}
	}

	cout << num;
	return 0;
}
