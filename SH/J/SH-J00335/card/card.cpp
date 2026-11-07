#include<bits/stdc++.h>
using namespace std;
int a[500001];
int ans[5001];
bool dp[5002][5001],dp1[200002][5001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int f=1;
	for(int i=1;i<n;i++)
	{
		ans[a[i]]=max(ans[a[i]],i);
		if(a[i]>a[i+1])
		{
			f=0;
			break;

		}
	}
	for(int i=1;i<=n;i++) ans[a[i]]=max(ans[a[i]],i);
	if(f)
	{
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		return 0;
	}
	memset(ans,0,sizeof(ans));
	for(int i=n;i>=1;i--)
	{
		if(!ans[a[i]])
		{
			for(int j=1;j<=m;j++)
			{
				if(n<=5000) dp[i][j]=dp[i+1][j];
				else dp1[i][j]=dp1[i+1][j];
			}
		}
		else
		{
			for(int j=1;j<=m;j++)
			{
				if(n<=5000) dp[i][j]=dp[ans[a[i]]][j];
				else dp1[i][j]=dp1[ans[a[i]]][j];
			}
		}
		dp[i][a[i]]=1;
		ans[a[i]]=i;
	}
	for(int i=1;i<=m;i++)
	{
		int s=0;
		for(int j=1;j<=n;j++)
		{
			if(n<=5000) s+=dp[j][i];
			else s+=dp1[j][i];
		}
		cout<<s<<" ";
	}
	return 0;
}
