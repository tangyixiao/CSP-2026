#include <bits/stdc++.h>
using namespace std;
int n, m, sum[300005], vis[500005], ans;
bool b[300005];
queue <int>a;
int main()
{
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		a.push(k);
	}
	vis[++ ans] = a.front();
	a.pop();
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			if (i == 1 && j == 1)continue;
			memset (b, 0, sizeof(b));
			memset (vis, 0, sizeof(vis));
            for (int k = 1; k <= ans; k++)
            {
            	if (vis[k] == a.front())
            	{
            		ans = k;
            		a.pop();
            		break;
				}
				else
				{
					vis[++ans] = a.front();
					a.pop();
				}
			}
		    for (int l = 1; l <= ans; l++)
		    {
                if (b[l])continue;
                b[vis[l]] = 1;
                a.push(b[l]);
			}
			for (int l = 1; l <= m; l++)
			{
				if (b[l])++ sum[l];
			}
			ans = 0;
		}
		a.pop();
	}
	for (int i = 1; i < m; i++)
	{
		cout << sum[i] << " ";
	}
	cout << sum[m];
	return 0;
}