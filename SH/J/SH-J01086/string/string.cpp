#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200010], b[200010];
char c[200010], d[200010];

int main()
{
	freopen("string6.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		if (c[i] == c[i - 1])
		{
			a[i - 1] += a[i];
			i--;
			n--;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		sum += a[i];
		b[i] = a[n - i + 1];
		d[i] = c[n - i + 1];
	}
	if (sum % 2 == 0)
		sum /= 2;
	else
		sum = (sum - 1) / 2;
	
	int posa = 1, posb = 1;
	long long ans = 0, i = a[posa], j = b[posb];
	do
	{
		long long q = 0, t = 0;
		if (a[posa] >= b[posb])
		{
			a[posa] -= b[posb];
			
			if (c[posa] != d[posb])
				ans += b[posb];
			posb++;
			j += b[posb];
		}
		if (a[posa] <= b[posb])
		{
			b[posb] -= a[posa];
			
			if (c[posa] != d[posb])
				ans += a[posa];
			posa++;
			i += a[posa];
		}
	}while (i < sum && j < sum && posa < n && posb < n);
	if (j > sum)
			b[posb] -= (j - sum);
	if (a[posa] > b[posb])
	{
		a[posa] -= b[posb];
		
		if (c[posa] != d[posb])
			ans += b[posb];
		posb++;
		j += b[posb];
		
	}
	if (i > sum)
		a[posa] -= (i - sum);
	if (a[posa] < b[posb])
	{
		b[posb] -= a[posa];
		
		if (c[posa] != d[posb])
		ans += a[posa];
		posa++;
		i += a[posa];
		
	}
	cout << ans << '\n';
	return 0;
}
