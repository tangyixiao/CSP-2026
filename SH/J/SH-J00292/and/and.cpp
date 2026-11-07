#include <bits/stdc++.h>
using namespace std;

int n, m, maxn = 0;
unsigned long long a[200010];
bool vis[200010], sift[200010];

void dfs(int ab, long long ans)
{
	if(ans <= maxn)
		return;
	if(ab == m)
	{
		if(ans > maxn)
			maxn = ans;
			return;
	}
	for (int i = 1; i <= n; i++)
	{
		if(!vis[i])
		{
			vis[i] = 1;
			dfs(ab+1, ans & a[i]);
			vis[i] = 0;
		}
	}
	return;
}
void solve1()
{
	for (int i = 1; i <= n; i++)
	{
		vis[i] = 1;
		dfs(1, a[i]);
		vis[i] = 0;
	}
	cout << maxn << endl;
}

void solve2()
{
	unsigned long long ch = 1 << 30;
	while (ch >= 1)
	{
		int cnt = 0;
		for (int j = 1; j <= n; j++)
		{
			if(!sift[j] && ((a[j] & ch) == ch))
				cnt++;
		}
		if(cnt >= m)
		{
			for (int j = 1; j <= n; j++)
			{
				if(!sift[j] && ((a[j] & ch) != ch))
					sift[j] = 1;
			}
		}
		ch >>= 1;
	}
	int cnt = 0, ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if(!sift[i])
		{
			if(cnt == 0) ans = a[i];
			cnt++;
			ans &= a[i];
		}
		if (cnt >= m) break;
	}
	cout << ans << endl;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if(n <= 15 || m <= 2)
		solve1();
	else if(m == n)
	{
		for (int i = 1; i <= n; i++)
			maxn = a[i] & maxn;
		cout << maxn << endl;
	}
	else solve2();
	return 0;
}
