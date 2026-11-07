#include<bits/stdc++.h>
using namespace std;
int n,m,dp[200010],a[200010],maxn=0,minn=1e9,ans,chu;
void dfs(int t,int sum,int num)
{
	if(sum==m)//选了m个数 
	{
		maxn=max(maxn,num);
		return ;
	}
	if(t==n+1)return ;
	dfs(t+1,sum,num);//bu
	if(t!=chu)dfs(t+1,sum+1,(num&a[t]));//xuan
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++)maxn=max(maxn,a[i]);
		cout<<maxn;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j==i)continue;
				maxn=max(maxn,(a[i]&a[j]));
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n)
	{
		for(int i=1;i<=n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(n<=20)
	{
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++)
		{
			dfs(i,0,a[i]);
			chu=i;
		}
		cout<<maxn;
		return 0;
	}
	if(m==n-1)
	{
		for(int i=1;i<=n;i++)minn=min(minn,a[i]);
		for(int i=1;i<=n;i++)
		{
			if(a[i]==minn)continue;
			if(ans!=0)ans=ans&a[i];
			else ans=a[i];
		 } 
		 cout<<ans;
		 return 0;
	}
	int flag=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=i-1)flag=0;
	}
	if(!flag)
	{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	else
	{
		cout<<m;
	}
	return 0;
 } 
