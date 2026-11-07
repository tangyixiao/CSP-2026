#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int dp[20005][20005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++)
	{
		dp[1][i]=a[i];
	}
	for (int i=2;i<=m;i++)
	{
		for (int j=1;j<=n;j++)
		{
			dp[i][j]=dp[i][j-1];
			for (int k=1;k<j;k++)
			{
				int v=int(dp[i-1][k]&a[j]);
				dp[i][j]=max(dp[i][j],v);
			}
		}
	}
	cout <<dp[m][n]; 
	return 0;
}
