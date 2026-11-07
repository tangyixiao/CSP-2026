#include <bits/stdc++.h>
using namespace std;
long long a[2000000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, cnt = 0, l = 0;
	cin >> n;
	string c, s;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		l += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	for (int i = 0; i < l; i++) {
		if (s[i] != s[l - i - 1])
			cnt++;
	}
	cnt /= 2;
	cout << cnt;
	return 0;
}