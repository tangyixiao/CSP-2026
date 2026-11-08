#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200020],vis[200020],ans = -1e9;
void dfs(int p,int x,int t)
{
	vis[x] = 1;
	if(p == m + 1)
	{	
		ans = max(ans,t);
		return;
	}
	for (int i = 1;i<=n;i++)
	{
		if(vis[a[i]] == 0)
		{
			vis[a[i]] = 1;
			dfs(p+1,a[i],t & a[i]);
			vis[a[i]] = 0;
		}
		
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++)
	{
		dfs(1,a[i],a[i]);
		vis[a[i]] = 0;
	}
	cout << ans;
	
	return 0;
}
