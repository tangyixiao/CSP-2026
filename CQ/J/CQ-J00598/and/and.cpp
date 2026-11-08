#include<bits/stdc++.h>
using namespace std;
int a[200005],dp[2005][2005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n>2000)
	{
		cout<<a[n-m+1];
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=2147483647;
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
//时间复杂度:O(n^2)
//预估分数:60分 
