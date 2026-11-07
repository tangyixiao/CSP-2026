#include<bits/stdc++.h>
using namespace std;
long long n,m,a,dp[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	dp[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		for(int j=m;j>=1;j--)
		{
			if(j==1) dp[j]=max(dp[j],a);
			else dp[j]=max(dp[j],dp[j-1]&a);
		}
	}
	cout<<dp[m];
	return 0;
}
