#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long l, n, a[N], s1, x;
string c[N], s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	x = 1, s1 = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = x; j < a[i] + x; j++) {
			s[j] = c[i];
		}
		x += a[i];
	}
	l = x - 1;
	for (int i = 0; i < x; i++) {
		if (s[i] != s[l + 1 - i]) {
			s[l + 1 - i] = s[i];
			s1++;
		}
	}
	cout << s1;
	return 0;
}
