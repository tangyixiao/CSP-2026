#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
bool vis[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int now[300005],top = 0;
		memset(vis,false,sizeof(vis));
		for (int j = i; j <= n; j++)
		{
			if (!vis[a[j]])
			{
				now[++top] = a[j];
				vis[a[j]] = true;
			}
			else
			{
				while (now[top] != a[j])
				{
					vis[now[top--]] = false;
				}
			}
		}
		for (int i = 1; i <= m; i++)
		{
			ans[i] += vis[i];
		}
	}
	for (int i = 1; i <= m; i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}