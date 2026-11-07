#include <bits/stdc++.h>
using namespace std;


const int N = 2e5+10, M = 1e7+10;
long long n, m, a[N], b[N];

int ejz(int x) {
	long long sum = 1, sz = 0, e[M];
	while (true) {
		e[sum] = x % 2;
		sum++;
		if (x == 1) {
			for (int i = sum; i >= 1; i--) {
				sz = sz + 10 + e[i];
			}
			return sz;
		}
		x = x / 2;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = ejz(a[i]);
	}
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
		return 0;
	}
	return 0;
}