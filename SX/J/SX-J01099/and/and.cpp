#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, i = 1, a[200000];
	cin >> n >> m;
	for (; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + i + 1, greater<int>());
	if (m == 2) {
		cout << (a[1]&a[2]);
		return 0;
	}
	if (m == 3) {
		cout << (a[1]&a[2]&a[3]);
	}
	if (m == 4) {
		cout << (a[1]&a[2]&a[3]&a[4]);
	}
	if (m == 5) {
		cout << (a[1]&a[2]&a[3]&a[4]&a[5]);
	}
	return 0;
}
