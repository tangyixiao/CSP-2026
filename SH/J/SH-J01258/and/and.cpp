#include<bits/stdc++.h>
//#define int long long 
using namespace std;
int n,m,vis[200005],a[200005],maxn = -1;
vector<int> v;
void dfs(int x)
{
	if(x == m + 1)
	{
		int ans = v[0];
		//cout << v[0] << " ";
		for(int i = 1;i < v.size();i++)
		{
			ans = ans & v[i];
			//cout << v[i] << " ";
		}
		//cout << ans << endl;
		maxn = max(maxn,ans);
	}
	for(int i = 1;i <= n;i++)
	{
		if(vis[i])continue;
		vis[i] = 1;
		v.push_back(a[i]);
		dfs(x + 1);
		v.pop_back();
		vis[i] = 0;
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)cin >> a[i];
	if(n <= 20)
	{
		dfs(1);
		cout << maxn; 
		return 0;
	}
	else if(m == 1)
	{
		int maxn = -1;
		for(int i = 1;i <= n;i++)maxn = max(maxn,a[i]);
		cout << maxn;
		return 0;
	}
	else
	{
		sort(a + 1,a + n + 1,[](int x,int y)
		{
			return x > y;
		});
		int ans = a[1];
		for(int i = 2;i <= m;i++)
		{
			ans = ans & a[i];
		}
		cout << ans;
		return 0;
	}
	return 0;
}
