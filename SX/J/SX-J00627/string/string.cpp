#include <bits/stdc++.h>
using namespace std;
string a, s, ss;
long long n, m, ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> m >> a;
		for (long long i = 1; i <= m; i++) {
			s += a;
		}
	}
	long long x = s.size();
	for (long long i = x - 1; i >= 0; i--) {
		ss += s[i];
	}
	while (s.find(ss) >= 10000000) {
		for (long long i = 0; i < (x - 1) / 2; i++) {
			if (s[i] != ss[i])
				ans++;
		}
	}
	cout << ans;
	return 0;
}