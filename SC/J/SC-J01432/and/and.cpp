#include<bits/stdc++.h>
using namespace std;
long long dp[200005],w[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
	}
	dp[0]=1;
	for(int i=1;i<=31;i++)
	{
		dp[0]*=2;
	}
    dp[0]--;
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=1;j--)
		{
			dp[j]=max(dp[j],dp[j-1]&w[i]);
		}
	}
	cout<<dp[m];
	return 0;
} 