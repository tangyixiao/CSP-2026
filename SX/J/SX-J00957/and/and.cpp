#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200010], f = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		if (a[i] == a[i + 1]) {
			f = 1;
		} else {
			f = 0;
			return 0;
		}
	}
	if (f == 1) {
		cout << a[1];
	}
	return 0;
}
