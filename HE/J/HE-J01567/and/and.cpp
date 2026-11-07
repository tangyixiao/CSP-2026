#include<bits/stdc++.h>
using namespace std;
const int N = 2010 + 10;
long long n, a[N], ans, m, f[N][2010];
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	memset(f, -0x7f, sizeof f);
	f[1][0] = 0;f[1][1] = a[1];
	for (int i = 2;i <= n;i ++) {
		for (int j = 1;j <= m;j ++) {
			f[i][j] = max(f[i - 1][j], f[i - 1][j - 1] & a[i]);
		}
	}
	cout << f[n][m];
	return 0;
}
