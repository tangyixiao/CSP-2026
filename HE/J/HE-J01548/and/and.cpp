#include <bits/stdc++.h>
using namespace std;

int a[200001];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++ i)
	{
		scanf("%d", &a[i]);
		cout << " *" << n << "* ";
	}
	//先针对 m = 1 时来说
	if (m == 1)
	{
		//输出最大数
		int maxn = INT_MIN;
		for (int i = 1; i <= n; ++ i)
		{
			maxn = max(maxn, a[i]);
		}
		printf("%d", maxn);
		return 0;
	}
	//针对 m = 2 时来说
	if (m == 2)
	{
		//从 n 个数中，找到按位与之后最大的两个数
		int ans = INT_MIN;
		for (int i = 1; i < n; ++ i)
		{
			for (int j = i + 1; j <= n; ++ j)
			{
				ans = max(ans, a[i] & a[j]);
			}
		}
		printf("%d", ans);
		return 0;
	}
	//正常做题

	return 0;
}
