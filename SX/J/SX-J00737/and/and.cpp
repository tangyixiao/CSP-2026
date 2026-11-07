#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], q;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < n; j++) {
			if (a[i]&a[j] > q && i != j) {
				q = a[i] & a[j];
			}
		}
	}
	cout << q;
	return 0;
}
