#include <bits/stdc++.h>
using namespace std;

long long n, m, a[500005], b[500005], c[500005], cnt[300005];
long long vis[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld",&a[i]); 
	}
	
	for (int i = 1; i <= n; i++)
	{
		memset(vis,0,sizeof(vis));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		for (int i = 1; i <= n; i++) b[i] = a[i];
		int pos = 0, end = 0;
		for (int j = i; j <= n; j++)
		{
			if (vis[b[j]])
			{
				pos = vis[b[j]];
				for (int p = pos+1; p <= end; p++)
				{
					vis[c[p]] = 0;
				}
			}
			else
			{
				c[++pos] = b[j];
				end = max(end,pos);
				vis[b[j]] = pos;
			}
		}
		for (int i = 1; i <= m; i++)
		{
			if (vis[i]) cnt[i]++;
		}
	}
	for (int i = 1; i <= m; i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
 } 
