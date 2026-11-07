#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, a[N], cntt, l, r;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	l = 1, r = n;
	while (l < r) {
		long long mind = min(a[l], a[r]);
		a[l] = a[l] - mind;
		a[r] = a[r] - mind;
		if (c[l] != c[r]) {
			cntt = cntt + mind;
		}
		if (a[l] == 0) {
			l++;
		}
		if (a[r] == 0) {
			r--;
		}
	}
	cout << cntt;
	return 0;
}
