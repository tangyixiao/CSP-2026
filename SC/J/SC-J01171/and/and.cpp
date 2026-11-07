#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m;
long long dp[N], a[N], b[N], c[N], cnt = 0;
int po[N];
long long Read() {
	long long x = 0, f = 1;
	char c;
	c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-') {
			f = -1;
		}
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = x * 10 + (c - '0');
		c = getchar();
	}
	return x*f;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	memset(dp, -0x3f, sizeof dp);
	for (int i = 1; i <= n; i++) {
		a[i] = Read();
		b[i] = a[i];
	}
	sort(b + 1, b + n + 1);
	for (int i = 1; i <= n; i++) {
		if (i == 1 || b[i] != b[i - 1]) {
			c[++cnt] = b[i];
		}
	}
	for (int i = 1; i <= n; i++) {
		int x = lower_bound(c + 1, c + cnt + 1, a[i]) - c;
		po[x]++;
	}
	dp[0] = (1 << 31) - 1;
	for (int i = 1; i <= cnt; i++) {
		if (po[i] != 0) {
			for (int j = m; j >= po[i]; j--) {
				dp[j] = max(dp[j], dp[max(0, j - po[i])] & c[i]);
			}
		}
	}
	cout << dp[m];
	return 0;
}