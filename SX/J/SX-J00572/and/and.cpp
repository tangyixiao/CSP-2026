#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	long long a[n];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	int arr[m];
	for (long long i = 0; i < m; i++) {
		arr[i] = -1;
	}
	int b = 0, c = 0, d = 1, e = 0;
	for (long long i = 0; i < n; i++) {
		for (long long j = i + 1; j < n; j++) {
			arr[0] = arr[i];
			arr[c] = a[j];
			for (long long k = 0; k < m; k++) {
				if (arr[k] < 0) {
					d = 0;
					break;
				} else {
					d = 1;
				}
			}
			if (d == 1) {
				e = arr[0];
				for (long long k = 1; k < m; k++) {
					e &= arr[k];
				}
				if (b < e) {
					b = e;
				}
				e = 0;
				c = 1;
			}
			c++;
		}
	}
	cout << b;
}
