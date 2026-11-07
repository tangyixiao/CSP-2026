#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int n, m;
int a[100005], wsw[100005][100005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	wsw[1][1] = a[1];
	for (int i = 2; i <= n; i++)
		wsw[1][i] = 0;
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= m; j++)
			wsw[i][j] = max(wsw[i - 1][j], wsw[i - 1][j - 1] & a[i]);
	cout << wsw[n][m];
	return 0;
}