#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[1000005],vis[1000005],ge[1000005];
queue<int> q,qu;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >>m ;
    for (int i=1;i<=n;i++)
    {
    	cin >> a[i];
	}
	for (int i=1;i<=n;i++)
	{
		while (!q.empty()) q.pop();
		memset(vis,0,sizeof vis);
		for (int j=i;j<=n;j++)
		{
			if (!vis[a[j]])
			{
				q.push(a[j]);
				vis[a[j]]=1;
			}
			else 
			{
				memset(vis,0,sizeof vis);
				int f=0;
				while (!q.empty())
				{
					int t=q.front();
					if (t==a[j]) f=1;
					if (f) q.pop();
					else
					{
						q.pop();
						qu.push(t);
						vis[t]=1;
					}
				}
				while (!qu.empty())
				{
					q.push(qu.front());
					qu.pop();
				}
				q.push(a[j]);
				vis[a[j]]=1;
			}
		}
		while (!q.empty())
		{
			int t=q.front();
			q.pop();
			ge[t]++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout << ge[i] <<" ";
	}
	return 0;
}
