#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[200005], n, m;
bool f[200005];

bool check(int x)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		if ((a[i] & x) == x && f[i])
			sum++;
	return sum >= m;
}

int dfs(int x)
{
	for (int i = 1; i <= n; i++)
		if ((a[i] & (1 << x)) == 0)
			f[i] = 0;
	int ans = 1 << x;
	for (int i = x - 1; i >= 0; i--)
	{
		if (check(1 << i))
		{
			ans |= dfs(i);
			return ans;
		}
	}
	return ans;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 29; i >= 0; i--)
	{
		memset(f, 1, sizeof f);
		if (check(1 << i))
		{
			cout << dfs(i);
			return 0;
		}
	}
	cout << 0;
	return 0;
}