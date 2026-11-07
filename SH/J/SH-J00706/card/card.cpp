#include<bits/stdc++.h>
const int N = 2e5 + 8, M = 3008, mmmm = 1e5 + 8;
using namespace std;
int n, m, a[N], nxt[N], p[M], rrr[mmmm];
bool ans[N][M];
void dfs(int p, int zzz)
{
	if(p > n)
		return;
	int t = nxt[p];
	if(t == 0)
	{
		ans[zzz][a[p]] = 1;
		dfs(p + 1, zzz);
	}
	else
	{
		ans[zzz][a[p]] = 1;
		dfs(t, zzz);
	}
}
bool check()
{
	for(int i = 1; i < n; i++)
		if(a[i] > a[i + 1])
			return false;
	return true;
}
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = n; i >= 1; i--)
		if(p[a[i]] == 0)
			p[a[i]] = i;
		else
		{
			nxt[i] = p[a[i]];
			p[a[i]] = i;
		}
	if(check())
	{
		for(int i = 1; i <= n; i++)
			rrr[a[i]]++;
		for(int i = 1; i <= m; i++)
		{
			rrr[i] += rrr[i - 1];
			cout << rrr[i] << ' ';
		}
		return 0;
	}
	for(int i = 1; i <= n; i++)
	{
		dfs(i, i);
		for(int j = 1; j <= m; j++)
			rrr[j] += ans[i][j];
	}
	for(int j = 1; j <= m; j++)
		cout << rrr[j] << ' ';
}
