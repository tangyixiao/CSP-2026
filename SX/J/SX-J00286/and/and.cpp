#include <bits/stdc++.h>
using namespace std;
long long a[200001];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		long long t = 0;
		for (long long i = 1; i <= n; i++)
			t = max(t, a[i]);
		cout << t;
		return 0;
	}
	if (m == 2) {
		long long t = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = i + 1; j <= n; j++) {
				t = max(t, (a[i] & a[j]));
			}
		}
		cout << t;
		return 0;
	}
	if (m == n) {
		for (long long i = 1; i < n; i++)
			a[i + 1] = (a[i] & a[i + 1]);
		cout << a[n];
		return 0;
	}
	if (m == n - 1) {
		long long t = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = 1; j < n; j++) {
				if (i == j)
					continue;
				a[i + 1] = (a[i] & a[i + 1]);
			}
			t = max(t, a[n]);
		}
		cout << t;
		return 0;
	}
	if (m == 3) {
		long long t = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = i + 1; j <= n; j++) {
				for (long long q = j + 1; q <= n; q++) {
					t = max(t, (a[i] & a[j] & a[q]));
				}
			}
		}
		cout << t;
		return 0;
	}
	cout << 0;
	return 0;
}
