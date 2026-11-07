#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5 + 5;
int n, m;
int a[N];
int stk[N], tp = 0;
int loc[N];
int ans[N];

void funa()
{
	for (int i = 1; i <= n; i++)
	{
		tp = 0;
		memset(loc, 0, sizeof loc);
		for (int j = i; j <= n; j++)
		{
			bool flag = 0;
			int L = 0, R = tp;
			while (L < R)
			{
				int M = L + R + 1 >> 1;
				if (stk[M] <= a[j]) L = M;
				else R = M - 1;
			}
			if (stk[L] == a[j]) flag = 1;
			if (flag) 
			{
				tp = loc[a[j]];
			}
			else
			{
				stk[++tp] = a[j];
				loc[a[j]] = tp;
			}
		}
		for (int j = 1; j <= m; j++)
		{
			bool flag = 0;
			int L = 0, R = tp;
			while (L < R)
			{
				int M = L + R + 1 >> 1;
				if (stk[M] <= j) L = M;
				else R = M - 1;
			}
			if (stk[L] == j) flag = 1;
			if (flag)
				ans[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
}

signed main ()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	bool isa = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] < a[i - 1]) isa = 0;
	}
	if (isa && n > 600) {funa(); return 0;}
	for (int i = 1; i <= n; i++)
	{
		tp = 0;
		memset(loc, 0, sizeof loc);
		for (int j = i; j <= n; j++)
		{
			bool flag = 0;
			for (int k = 1; k <= tp; k++)
				if (stk[k] == a[j])
				{
					flag = 1;
					break;
				}
			if (flag) 
			{
				tp = loc[a[j]];
			}
			else
			{
				stk[++tp] = a[j];
				loc[a[j]] = tp;
			}
		}
		for (int j = 1; j <= m; j++)
		{
			bool flag = 0;
			for (int k = 1; k <= tp; k++)
				if (stk[k] == j)
				{
					flag = 1;
					break;
				}
			if (flag)
				ans[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
