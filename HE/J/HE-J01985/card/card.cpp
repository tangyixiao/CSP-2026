#include <bits/stdc++.h>
using namespace std;
long long a[500010], oa[500010], num[500010], b[500010];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, len = 0;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		oa[i] = a[i];
		len++;
	}

	for (long long i = 1; i <= n; i++) 
	{
		for (long long j = i; j <= n; j++)
		{
			long long c = a[j];
		bool tmp = false;
		for (int k = 1;k <= len; k++)
		{
			if (a[k] == c)
			{
				tmp = true;
				len = k;
				break;
			}
		}
		if (!tmp)
		{
			a[++len] = c;
		}
		}
		for (long long i = 1; i <= m; i++)
		{
			if (!b[a[i]])
				num[a[i]]++, b[a[i]] = true;
		}
		for (long long i = 1; i <= n; i++)
		{
			
			b[a[i]] = 0;
		}
	}
	num[1] -= 1;
	for (long long i = 1; i <= m; i++)
	{
		cout << num[i] << ' ';
	}
	return 0;
} 
