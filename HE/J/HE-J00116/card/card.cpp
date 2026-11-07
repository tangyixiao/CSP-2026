#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[n + 1];
	vector <int> ans(m + 1, n);
	vector <vector <bool>> vis(m + 1, vector <bool>(n + 1, 0));
	vector <vector <int>> last(m + 1, vector <int>(n + 1, n));
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		for (int j = i + 1; j <= n; j ++)
			last[a[i]][j] = i;
	}
	for (int i = 1; i <= m; i ++)
		for (int j = 1; j <= n; j ++)
			if (a[j] == i)
				for (int k = last[i][j] + 1; k <= j; k ++)
					if (! vis[a[k]][k]) {
						vis[a[k]][k] = 1;
						ans[a[k]] --;
						for (int h = k; h <= n; h ++)
							last[a[k]][h] = last[a[k]][k - 1];
					}
	for (int i = 1; i <= m; i ++)
		cout << ans[i] << ' ';
	return 0;
}

