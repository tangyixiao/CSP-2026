#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int p[n + 5];
	char c[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> p[i] >> c[i];
	}
	int _i1 = 1, _i2 = n;
	long long ans = 0;
	while (true) {
		if (_i2 - _i1 > 1) {
			if (c[_i1] != c[_i2]) {
				if (_i1 == 1 && _i2 == n) {
					ans += max(p[_i1], p[_i2]);
				} else {
					ans += max(p[_i1], p[_i2]) - (max(p[_i1 - 1], p[_i2 + 1]) - min(p[_i1 - 1], p[_i2 + 1]));
				}
			}
		} else {
			if (c[_i1] != c[_i2]) {
				if (_i1 == 1 && _i2 == n) {
					ans += max(p[_i1], p[_i2]);
				} else {
					ans += max(p[_i1], p[_i2]) - (max(p[_i1 - 1], p[_i2 + 1]) - min(p[_i1 - 1], p[_i2 + 1]));
				}
			}
			break;
		}
		_i1++;
		_i2--;
	}
	cout << ans;
	return 0;
}
