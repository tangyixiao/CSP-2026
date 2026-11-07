#include <bits/stdc++.h>
using namespace std;

long long a[200010],vis[200010];
int n,m;
long long ans = 0; 

void dfs(int id,long long sum)
{
	if (id >= m)
	{
		ans = max(ans,sum);
		return;
	}
	for (int i = 1;i <= n;i++)
	{
		if (vis[i])
			continue;
		vis[i] = 1;
		if (id == 0 && sum == 0)
			dfs(id + 1,a[i]);
		else
			dfs(id + 1,sum & a[i]);
		vis[i] = 0;
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
		cin >> a[i];
	dfs(0,0);
	cout << ans << endl;
	return 0;
}
