#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int n, a[N], b[N];
char c[N];
long long ans;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i] >> c[i];
		b[i] = a[i];
	}
	long long p = 1, q = n;
	while (p < q)
	{
		if (b[p] > b[q])
		{
			if (c[p] != c[q])
			{
				ans += b[q];
				b[p] -= b[q];
				q--;
			}
			else
			{
				b[p] -= b[q];
				q--;
			}
		}
		else if (b[p] == b[q])
		{
			if (c[p] != c[q])
			{
				ans += b[q];
				b[p] -= b[q];
				q--, p++;
			}
			else
			{
				b[p] -= b[q];
				q--, p++;
			}
		}
		else
		{
			if (c[p] != c[q])
			{
				ans += b[p];
				b[q] -= b[p];
				p++;
			}
			else
			{
				b[q] -= b[p];
				p++;
			}
		}
	}
	cout << ans << endl;
	return 0;
} 
