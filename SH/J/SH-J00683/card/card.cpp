#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[500010], b[300010], d[500010], cnt[300010];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for (int j = 1; j <= n; j ++)
	{
		int l = 1;
		for (int i = 0; i <= m+1; i ++)
		{
			b[i] = 0;
		}
		for (int i = j; i <= n; i ++)
		{
			if (b[a[i]])
			{
				for (int k = b[a[i]]+1; k <= l; k ++)
				{
					b[d[k]] = 0;
					d[k] = 0;
				}
				l = b[a[i]]+1;
			}
			else
			{
				d[l] = a[i];
				b[a[i]] = l;
				l ++;
			}
		}
		for (int i = 1; i <= m; i ++)
		{
			cnt[i] += bool(b[i]);
		}
	}
	for (int i = 1; i <= m; i ++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
}
