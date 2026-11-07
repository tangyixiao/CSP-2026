#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 5e5 + 5;
int n,m,a[N],f[N],cnt[N],p[N],ans[N],sz[N];
vector<int> g[N];
void dfs(int x,int fa)
{
	sz[x] = 1;
	for (auto y:g[x])
		dfs(y,x),sz[x] += sz[y];
	if (a[x] != a[fa]) ans[a[x]] += sz[x];
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0); 
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = n; i >= 1; i--)
	{
		if (!p[a[i]]) p[a[i]] = i + 1;
		if (i != n) g[p[a[i]]].push_back(i);
		p[a[i]] = i;
	}
	dfs(n,0);
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
