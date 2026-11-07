#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int num[300005];
int ans[300005];
int vis[500005];
void dfs(int cnt)
{
	if(cnt>n) return ;
	memset(vis,0,sizeof(vis));
	int x=0;
	for(int i=cnt;i<=n;i++)
	{
		if(i>cnt && a[i]==a[i-1]) continue;
		if(!vis[a[i]])
		{
			vis[a[i]]=++x;
			continue;
		}
		for(int j=1;j<=m;j++)
		{
			if(vis[j]>vis[a[i]]) vis[j]=0;
		}
		x=vis[a[i]]+1;
	}
	for(int i=1;i<=m;i++)
	{
		if(vis[i]) ans[i]++;
	}
	dfs(cnt+1);
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	bool flag=true;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>1 && a[i]<a[i-1]) flag=false;
		num[a[i]]=i;
		vis[a[i]]++;
	}
	if(flag)
	{
		for(int i=1;i<=m;i++) cout<<num[i]<<" ";
		return 0;
	}
	if(n<=5000)
	{
		dfs(1);
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		return 0;
	}
	if(m==2)
	{
		if(vis[1]>vis[2]) cout<<n<<" "<<vis[2];
		else cout<<vis[1]<<" "<<n;
		return 0;
	}
	for(int i=1;i<=m;i++) cout<<vis[i]<<" ";
	return 0;
}
