#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
const int M=3e5+10;
int n,m,a[N],lst[M],ans[N],f[N];
vector<int>G[N]; 
void dfs(int u)
{
	for(auto v:G[u])
	{
		dfs(v);
		f[u]+=f[v];
	}
	ans[a[u]]+=f[u];
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		if(!lst[a[i]])lst[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		f[lst[a[i]]]++; 
		if(lst[a[i]]==i&&i<n)
		{
			G[lst[a[i+1]]].push_back(i);
		}
	}
	dfs(n);
	for(int i=1;i<=m;i++)
	{
		if(i>1)cout<<" ";
		cout<<ans[i];
	}
	return 0;
}
