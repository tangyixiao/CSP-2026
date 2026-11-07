#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
long long n, m, zd = LLONG_MIN, k = 0;
long long a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < m; j++) {
			k += a[j] & a[j + 1];
		}
		zd = max(int (a[i] & a[i + 1]), int(zd));
	}
	cout << zd;
	return 0;
}
