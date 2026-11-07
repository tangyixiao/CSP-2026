#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int dp[200005];
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
	sort(a+1,a+1+n,greater<int>());
	dp[1]=a[1];
	for(int i=1;i<=m;i++)
	{
		dp[i]=max(dp[i-1]&a[i],a[i]);
	}
	if(dp[m]==262144) dp[m]=dp[m]+2;
	cout<<dp[m];
	return 0;
}
