#include <bits/stdc++.h>
#define int long long
#define db double
#define fr(i,s,n) for(int i=s;i<=n;i++)
#define dn(i,s,n) for(int i=s;i>=n;i--)
#define please return
#define AC 0
using namespace std;
int a[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	fr(i, 1, n)cin >> a[i];
	int f[n + 5][m + 5];
	memset(f, 0, sizeof(f));
	fr(i, 1, n)f[i - 1][0] = a[i];
	fr(i, 1, n) {
		fr(j, 1, min(m, i)) {
			f[i][j] = max(f[i - 1][j], f[i - 1][j - 1] & a[i]);
		}
	}
	cout << f[n][m];
	please AC;
}