#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], b[200005], tong[30], sum, l, cnt;
string s[200005], p[50000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		b[i] = a[i];
		while (b[i]--) {
			p[++cnt] = s[i];
		}
		l += a[i];
	}
	for (int i = 1; i <= l / 2 + 1; i++) {
		if (p[i] != p[l + 1 - i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
