#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+10;
int n,m,a[maxn],p[maxn],sz[maxn],ans[maxn];
vector<int> e[maxn];
bool f[maxn];
void dfs(int x)
{
//	cout<<'!'<<x<<endl;
	for(int y:e[x])
	{
		dfs(y);
		sz[x]+=sz[y];
	}
	sz[x]++;
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		f[i]=1;
		cin>>a[i];
		if(p[a[i]])
		{
			e[i].push_back(p[a[i]]);
			f[p[a[i]]]=0;
		}
		p[a[i]]=i;
	}
	for(int i=1;i<n;i++)
		if(f[i])
			e[i+1].push_back(i);
	dfs(n);
//	for(int i=1;i<=n;i++)cout<<sz[i]<<' ';cout<<endl;
	for(int i=1;i<=n;i++)if(f[i])ans[a[i]]=sz[i];
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
