#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[500005], d[500005], f[500005], ans[300005];
vector<int> e[500005];
signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = n; i >= 1; i--) d[i] = f[a[i]], f[a[i]] = i; 
	for (int i = 1; i < n; i++)
	{
		if (d[i]) e[d[i]].push_back(i);
		else e[i + 1].push_back(i);
	}
	memset(f, 0, sizeof f);
	for (int i = 1; i <= n; i++)
	{
		f[i] = 1;
		for (int j : e[i]) f[i] += f[j];
		if (!d[i]) ans[a[i]] = f[i];
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
