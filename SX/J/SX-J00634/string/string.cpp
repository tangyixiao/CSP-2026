#include <bits/stdc++.h>
using namespace std;
string s, a, b;
long long n, m, cnt;
long long minn = 210000000;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> a[i];
		for (int j = 1; j <= m; j++) {
			s += a[i];
		}
	}
	int len = s.size();
	for (int i = len - 1; i >= 0; i--) {
		b += s[i];
	}
	for (int i = 0; i <= len - 1; i++) {
		if (b[i] != s[i]) {
			cnt++;
		}
		if (cnt < minn) {
			minn = cnt;
		}
	}
	cout << minn;
	return 0;
}