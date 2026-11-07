#include <bits/stdc++.h>
using namespace std;
int n, m;
long long s[200005];
int a[200005][31];
int maxn;
int b[200005];
long long c[200005];
int k;

void an(int x, int j) {
	int k = 0;
	while (x != 0) {
		a[j][k] = x % 2;
		k++;
		x /= 2;
		maxn = max(maxn, k);
	}
}
long long ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	sort(s + 1, s + n + 1);
	for (int i = 1; i <= n; i++) {
		an(s[i], i);
	}
	for (int i = maxn - 1; i >= 0; i--) {
		int t = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j][i] == 1) {
				t++;
				if (t < 2) {
					b[t] = j;
				}
			}
		}
		if (t < 2) {
			for (int k = 1; k <= t; k++) {
				a[b[k]][i] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		k = 1;
		for (int j = 0; j <= maxn - 1; j++) {
			c[i] += a[i][j] * k;
			k *= 2;
		}
	}
	sort(c + 1, c + 1 + n);
	ans = c[n];
	for (int i = n - 1; i > n - m; i--) {
		ans = ans &c[i];
	}
	cout << ans;
	return 0;
}
