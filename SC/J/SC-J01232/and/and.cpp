#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define il inline
using namespace std;
int n,m,a[200010],dp[200010];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	dp[1]=a[1];
	if(n==m)
	{
		for(int i=2;i<=n;i++)dp[i]=a[i]&dp[i-1];
		cout<<dp[m];
		return 0;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=min(m,i);j>=1;j--)
		{
			if(j==1)dp[j]=max(dp[j],a[i]);
			else dp[j]=max(dp[j],a[i]&dp[j-1]);
		}
	}
	cout<<dp[m];
	return 0;
}
//TLE