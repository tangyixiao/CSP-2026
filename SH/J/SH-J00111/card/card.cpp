#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5+10;
int n, m, t, ppA = 1, a[N], cur[N], p[N], ans[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] > a[i-1]) ppA = 0;
	}
	if (ppA) {
		for (int i = 1; i <= n; i++)
			for (int j = i; j <= n; j++)
				if (j == i || a[j] != a[j-1])
					ans[a[j]]++;
		for (int i = 1; i <= m; i++)
			cout << ans[i] << " ";
		cout << "\n";
		return 0;
	}
	if (m <= 2) {
		for (int i = 1; i <= n; i++) {
			ans[a[i]]++;
			if (a[i] == a[n]) ans[a[n]]++;
		}
		cout << ans[1] << " " << ans[2] << "\n";
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		t = 0;
		memset(p, 0, sizeof(p));
		for (int j = i; j <= n; j++)
		{
			if (p[a[j]]) {
				for (int k = p[a[j]]+1; k <= t; k++)
					p[cur[k]] = 0;
				t = p[a[j]];
			}
			else cur[++t] = a[j], p[a[j]] = t;
		}
		for (int j = 1; j <= t; j++)
			ans[cur[j]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	cout << "\n";
	return 0;
}
