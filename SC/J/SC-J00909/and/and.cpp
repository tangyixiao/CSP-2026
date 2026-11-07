#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],vis[200005],ans;
void dfs(int x,int w,int cnt)
{
	if(cnt==m)
	{
		ans=max(ans,w);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(i==x) continue;
		if(vis[i]) continue;
		vis[i]=1;
		dfs(i,w&a[i],cnt+1);
		vis[i]=0;
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i,a[i],1);
	}
	cout <<ans;
	return 0;
}