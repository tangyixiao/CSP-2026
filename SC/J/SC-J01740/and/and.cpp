#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int dp[200010];
int vis[200010];
int ans=0;
int maxn=0;
void dfs(int x,int num)
{
	if(x==m+1)
	{
		ans=max(ans,num);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			dfs(x+1,num&a[i]);
			vis[i]=0;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(n<=20)
	{
		dfs(1,pow(2,31)-1);
		cout<<ans;
		return 0;
	}
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	dp[0]=pow(2,31)-1;
	for(int i=1;i<=n;i++)
	{
//		dp[1]=max(dp[1],a[i]);
		for(int j=m;j>=1;j--)
		{
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
//		for(int j=1;j<=m;j++)
//		{
//			cout<<dp[j]<<" ";
//		}
//		cout<<"\n";
	}
	cout<<dp[m];
	return 0;
}
//0，1背包,体积为1，价值为