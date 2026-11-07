#include <bits/stdc++.h>
using namespace std;
long long n,m,dp[2005][2005],val[2005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>val[i];
	}
	sort(val,val+n);
	for (int i=0;i<=n;i++)
	{
		for (int j=0;j<=m;j++)
		{
			dp[i][j]=0;
			if (i==j&&i>=2)
			{
				int ans=val[1];
				for (int k=2;k<=i;k++)
				{
					ans=ans&val[i];
				}
			}
			else if(j==1)
			{
				dp[i][j]=val[i];
			}
		}
	}
	dp[2][2]=val[1]&val[2];
	for (int i=2;i<=n;i++)
	{
		for (int j=2;j<=m&&j<=n;j++)
		{
			if (j!=i)
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]&dp[i-1][j-1]);
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}
