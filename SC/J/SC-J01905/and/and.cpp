#include<bits/stdc++.h>
using namespace std;
const int N=2005;
int n,m,ans;
int dp[N][N];
int mmax[N],a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mmax[i]=max(mmax[i-1],a[i]);
		if(m==n)
		{
			if(i==1)
				ans=a[i];
			else
				ans=ans&a[i];
		}
		if(m==1)
		{
			ans=max(ans,a[i]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		dp[i][1]=mmax[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<=min(i,m);j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}	
	}
	ans=dp[n][m];
	cout<<ans;
	return 0;
}