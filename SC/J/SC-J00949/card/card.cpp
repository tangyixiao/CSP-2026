#include <bits/stdc++.h>
using namespace std;
int a[500010],last[300010],cnt[300010];
stack<int> g[500010],ans[500010];
bool vis[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = n; i >= 1; i--)
	{	
		g[i] = g[i + 1];
		g[i].push(a[i]);
		ans[i] = g[i];
		if(last[a[i]] == 0)
		{
			last[a[i]] = i;
		}
		else
		{
			for(int j = i; j <= last[a[i]] - 1; j++)
			{
				ans[i].pop();
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			vis[j] = 0;
		}
		while(!ans[i].empty())
		{
			int x = ans[i].top();
			cout << x << ' ';
			ans[i].pop();
			if(vis[x])
			{
				continue;
			}
			vis[x] = 1;
			cnt[x]++;
		}
		cout << endl;
	}
	for(int i = 1; i <= m; i++)
	{
		cout << cnt[i] << ' ';
	}
	return 0;
}