#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;
int a[maxn],vis[maxn];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	long long ans = 0;
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	int tot = 1073741824;
	while (tot > 0)
	{
		int cnt = 0;
		for (int i = 1;i <= n;i++)
		{
			if (!vis[i] && (a[i]&tot) > 0) cnt++;
		}
		if (cnt >= m)
		{
			ans += tot;
			for (int i = 1;i <= n;i++)
			{
				if (!vis[i] && (a[i]&tot) <= 0) vis[i] = 1;
			}
		}
		tot >>= 1;
	}
	cout << ans;
	return 0;
}