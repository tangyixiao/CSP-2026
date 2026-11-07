#include <bits/stdc++.h>
#define ll long long
using namespace std;

int st[5005], ans[5005], a[5005];
bool f[5005];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++)
	{
		int tp = 0;
		memset(f, 0, sizeof f);
		memset(st, 0, sizeof st);
		for (int j = i; j <= n; j++)
		{
			if (f[a[j]])
			{
				while (st[tp] != a[j] && tp >= 1)
					f[st[tp]] = 0, tp--;
			}
			else
				st[++tp] = a[j], f[a[j]] = 1;
		}
		for (int j = 1; j <= m; j++)
			ans[j] += f[j];
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/