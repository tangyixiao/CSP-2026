#include <bits/stdc++.h>

using namespace std;

const int N = 500010;

int n, m, cnt = 0, ne[N];
long long ans[N], a[N], b[N], t[N];
int mp[N];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
		mp[a[i]] = i;
		if (a[i] != a[i - 1])
		{
			b[ ++ cnt] = a[i];
		}
	}
	bool flag = true;
	for (int i = 2; i <= cnt; i ++ )
	{
		if (b[i] != b[i - 1] + 1)
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		for (int i = 1; i <= cnt; i ++ )
		{
			printf("%lld ", mp[b[i]]);
		}
		return 0;
	}
	for (int i = 1; i <= n; i)
	{
		if (mp[a[i]] == i)
		{
			int j = i + 1;
			while (mp[a[j]] == j && j <= n) j ++ ;
			for (int k = i; k < j; k ++ )
			{
				ne[k] = j;
			}
			i = j;
		}
		else
		{
			i ++ ;
		}
	}
	for (int i = 1; i <= n; i ++ )
	{
		int h = i;
		while (h <= n)
		{
			if (mp[a[h]] != h)
			{
				h = mp[a[h]];
			}
			else
			{
				t[h] ++ ;
				t[ne[h]] -- ;
				h = ne[h];
			}
		}
	}
	for (int i = 1; i <= n; i ++ )
	{
		t[i] += t[i - 1];
		ans[a[i]] += t[i];
	}
	for (int i = 1; i <= m; i ++ )
	{
		printf("%lld ", ans[i]);
	}
	return 0;
}
