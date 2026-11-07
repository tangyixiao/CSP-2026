#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1e9,dp[20005][20005],last;
int main()
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
		for(int j=1;j<=i;j++)
		{
			int cnt;
			if(dp[i-1][j-1]==0)dp[i-1][j-1]=a[i];
			cnt=dp[i-1][j-1]&a[i];
			dp[i][j]=max(cnt,dp[i-1][j]);
		}
	}
	cout<<dp[n][m];
}
/*5 3
31 3 1 15 7*/