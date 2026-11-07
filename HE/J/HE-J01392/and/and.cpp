#include<bits/stdc++.h>
using namespace std;
long long dp[200005],a[200005],n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]<=dp[m]) continue;
			for(int j=i+1;j<=n;j++)
			{
				dp[m]=max(dp[m],a[i]&a[j]);
			}
		}
		cout<<dp[m];
		return 0;
	 } 
	sort(a+1,a+1+n,greater<long long>());
	dp[1]=a[1]; 
	for(int i=2;i<=n;i++)
	{
		if(dp[m]>=a[i]) continue;
		for(int j=m;j>1;j--)
		{
			dp[j]=max((dp[j-1]&a[i]),dp[j]);
		}
	}
	cout<<dp[m];
	return 0;
}
