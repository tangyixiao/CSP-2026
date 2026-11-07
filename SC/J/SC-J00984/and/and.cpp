#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,l=0,ans=0,a[N],dp[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dp[0]=(2<<31)-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=1;j--)
		{
			dp[j] = max(dp[j], dp[j-1] & a[i]);
		}
	}
	cout<<dp[m];
	return 0;
} 
