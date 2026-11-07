#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	vector <long long> a(n+1);
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector<vector<long long>>dp(n+1,vector<long long> (m+1));
	for (int i=1;i<=n;i++)
	{
		dp[i][1]=a[i];
	}
	for (int j=2;j<=m;j++)
	{
		for (int i=1;i<=n;i++)
		{
			for (int k=1;k<=n;k++)
				if(k!=i) dp[i][j]=dp[k][j-1]&a[i];
		}
	}
	long long sum=0;
	for (int i=1;i<=n;i++)
		sum=max(sum,dp[n][m]);
	cout<<sum;
}