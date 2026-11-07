#include <bits/stdc++.h>

using namespace std;

const int N = 200010;

int n, a[N], c[N];
long long ans = 0;
char s[10];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d%s", &a[i], s + 1);
		c[i] = s[1] - '0';
	}
	int j = n;
	for (int i = 1; i <= n; )
	{
		if (i >= j) break;
		if (c[i] != c[j])
		{
			if (a[i] < a[j])
			{
				ans += a[i];
				a[j] -= a[i];
				a[i] = 0;
				i ++ ;
			}
			else if (a[i] > a[j])
			{
				ans += a[j];
				a[i] -= a[j];
				a[j] = 0;
				j -- ;
			}
			else
			{
				ans += a[j];
				a[i] = 0;
				a[j] = 0;
				j -- ;
				i ++ ;
			} 
		}
		else
		{
			if (a[i] < a[j])
			{
				a[j] -= a[i];
				a[i] = 0;
				i ++ ;
			}
			else if (a[i] > a[j])
			{
				a[i] -= a[j];
				a[j] = 0;
				j -- ;
			}
			else
			{
				a[i] = 0;
				a[j] = 0;
				j -- ;
				i ++ ;
			} 
		}
	}
	printf("%lld\n", ans);
	return 0;
}
