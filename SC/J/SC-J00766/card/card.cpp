#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
ll ans=0,d=0;
ll vis[200005];
ll n,m;
ll pai[200005];
ll dfs(int i,int t)
{
	if(t==m-1)
	{
		pai[t]=a[i];
		ll maxn=pai[0];
		for(int j=0;j<m;j++)
		{
			maxn=maxn&pai[j];
		}
		return maxn;
	}
	if(vis[i]==0)
	{
		pai[t]=a[i];
	}
	vis[i]=1;
	for(int j=i+1;j<n;j++)
	{
		d=max(d,dfs(j,t+1));
	}
	vis[i]=0;
	return d;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		ans=max(ans,dfs(i,0));
	}
	cout<<ans<<" ";
	return 0;
}
