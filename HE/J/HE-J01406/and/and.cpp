#include<bits/stdc++.h>
using namespace std;
unsigned long long dp[200050],a[200050],n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(dp[j-1]==0)
			dp[j]=a[i];
			else
			dp[j]=max(dp[j-1],dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
