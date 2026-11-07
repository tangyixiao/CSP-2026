#include <bits/stdc++.h>
using namespace std;

long long n, m, a, c = 0, c1 = 0;


int main() {
	freopen("and.in", "r", stdin)
	freopen("and.out", "w", stdout)
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (i == 1) {
			c = a;
		}
		if (c = a) {
			c1 = a;
		} else if (c % a == 0 || a % c == 0) {
			c1 = 0;
		} else {
			c1 = min(c, a);
		}
	}
	cout << c1;
	return 0;
}