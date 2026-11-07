#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+20;
long long n;
long long m;
long long a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	long long j2 = a[1];
	long long j1 = 0;
	long long j3 = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == m) {
		for (int i = 2; i <= n; i++) {
			j2 = j2 &a[i];
		}
		cout << j2;
		return 0;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (a[i] & 1 > j1) {
				j1 = a[i] & 1;
			}
		}
		cout << j1;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int k = i + 1; k <= n; k++) {
				int hh = a[i] & a[k];
				if (hh > j3) {
					j3 = hh;
				}
			}
		}
		cout << j3;
		return 0;
	}
	if (m == 3) {
		long long j4 = 0;
		for (int i = 1; i <= n; i++) {
			for (int k = i + 1; k <= n; k++) {
				for (int j = k + 1; j <= n; j++) {
					int hh = a[i] & a[k] & a[j];
					if (hh > j4) {
						j4 = hh;
					}
				}
			}
		}
		cout << j4;
		return 0;
	}
	return 0;
}
