#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], sum = 0, ans = 0, cnt = 0;
char b[200005];
char c[100000005], l[100000005], r[100000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 1; j <= a[i]; j++) {
			c[sum + j] = b[i];
		}
		sum += a[i];
	}
	for (int i = 1; i <= sum / 2; i++) {
		l[i] = c[i];
	}
	if (sum % 2 == 1) {
		for (int i = sum / 2 + 2; i <= sum ; i++) {
			r[++cnt] = c[i];
		}
	} else {
		for (int i = sum / 2 + 1; i <= sum ; i++) {
			r[++cnt] = c[i];
		}
	}
	for (int i = 1; i <= sum / 2; i++) {
		if (l[i] != r[i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}/*
2
2 a
3 b
6
1000000000 a
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
