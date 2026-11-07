#include <bits/stdc++.h>
using namespace std;
#define int long long
string s;

bool hui(string m) {
	int l = m.size();
	if (l % 2 == 1) {
		for (int i = 0; i < l / 2 + 2; i++) {
			if (m[i] != m[l - i]) {
				return 0;
			}
		}
	} else {
		for (int i = 0; i < l / 2 + 1; i++) {
			if (m[i] != m[l - i]) {
				return 0;
			}
		}
	}
	return 1;
}

int nu(string m) {
	int l = m.size(), cnt = 0;
	if (hui(m)) {
		return 0;
	}
	for (int i = 0; i < (l + 1) / 2 - 1; i++) {
		if (m[i] != m[l - i - 1]) {
			cnt++;
		}
	}
	return cnt;
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, x;
	char q;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> q;
		for (int j = 1; j <= x; j++) {
			s += q;
		}
	}
	if (hui(s)) {
		printf("%d", 0);
	} else
		printf("%lld", nu(s));
	return 0;
}