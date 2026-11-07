#include<bits/stdc++.h>
using namespace std;
int n,m,a[20000],dp[20000][20000],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if(n>20000||m>20000) return 0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i][0]=a[i]; 
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
