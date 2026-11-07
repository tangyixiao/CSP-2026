#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[200005], f[200005], s, ans;
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {cin >> a[i]; f[i] = 1;}
	for (int i = 29; i >= 0; i--)
	{
		s = 0;
		for (int j = 1; j <= n; j++) if (f[j] && (a[j] >> i & 1)) s++;
		if (s < m) continue;
		for (int j = 1; j <= n; j++) if (!(a[j] >> i & 1)) f[j] = 0;
		ans += 1 << i;
	}
	cout << ans;
	return 0;
}
