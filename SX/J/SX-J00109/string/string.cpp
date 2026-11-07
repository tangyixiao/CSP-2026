#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, a[N], ans, s, e;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n ;
	s = 1;
	e = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	while (s < e) {
		if (a[s] == 0) {
			s++;
		}
		if (a[e] == 0) {
			e--;
		}
		if (c[s] != c[e]) {
			ans = ans + min(a[e], a[s]);
		}
		if (a[s] < a[e]) {
			a[e] -= a[s];
			a[s] = 0;
		} else {
			a[s] -= a[e];
			a[e] = 0;
		}
	}
	cout << ans;
	return 0;
}
