#include<bits/stdc++.h>
using namespace std;
const long long N=2005;
long long a[N];
long long dp[N][N];
bool cmp(long long a,long long b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,o=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];

	}
	sort(a+1,a+n+1,cmp);
	dp[1][1]=a[1];
	for(int i=2;i<=n;i++)
	{
		dp[i][1]=a[1];
		for(int j=2;j<=i;j++)
		{
			long long k=dp[i][j-1]&a[i];
			dp[i][j]=max(dp[i-1][j],k);
		}
	}
	cout<<dp[n][m];
}