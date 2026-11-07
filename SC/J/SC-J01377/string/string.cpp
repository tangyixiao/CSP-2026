#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n;
int a[N];
char c[N];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		char tmp[10];
		scanf("%d%s", &a[i], tmp);
		c[i] = tmp[0];
	}
	long long ans = 0;
	for (int i = 1, j = n; i <= j;)
	{
		if (a[i] == a[j])
		{
			if (c[i] != c[j]) ans += a[i];
			i++, j--;
			continue;
		}
		if (a[i] > a[j])
		{
			if (c[i] != c[j]) ans += a[j];
			a[i] -= a[j], j--;
		}
		else
		{
			if (c[i] != c[j]) ans += a[i];
			a[j] -= a[i], i++;
		}
	}
	printf("%lld\n", ans);
	return 0;
}