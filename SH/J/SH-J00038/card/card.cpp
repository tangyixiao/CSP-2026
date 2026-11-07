#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[500010],ans[300010],pos[300010],sz[500010];
vector<int> g[500010];
void dfs(int x)
{
	for(int i = 0;i < g[x].size();i++)
	{
		int y = g[x][i];
		dfs(y);
		sz[x] += sz[y];
	}
	ans[a[x]] += sz[x];
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	memset(pos,-1,sizeof(pos));
	pos[a[n]] = n;
	sz[n] = 1;
	for(int i = n - 1;i >= 1;i--)
	{
		if(pos[a[i]] == -1)
		{
			pos[a[i]] = i;
			g[pos[a[i + 1]]].push_back(i);
		}
		sz[pos[a[i]]]++;
	}
	dfs(n);
	for(int i = 1;i <= m;i++) cout << ans[i] << ' ';
	cout << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
