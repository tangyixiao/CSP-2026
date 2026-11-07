#include <bits/stdc++.h>

using namespace std;

const int N = 200010;

int n, a[N], m;
bool vis[N];
long long ans = 0;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	memset(vis, false, sizeof vis);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
	}
	for (int i = 31; i >= 0; i -- )
	{
		int sum = 0;
		for (int j = 1; j <= n; j ++ )
		{
			if (vis[j]) continue;
			if (a[j] >> i & 1)
			{
				sum ++ ;
			}
		}
		if (sum >= m)
		{
			ans += (1 << i);
			for (int j = 1; j <= n; j ++ )
			{
				if (a[j] >> i & 1) continue;
				vis[j] = true;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
