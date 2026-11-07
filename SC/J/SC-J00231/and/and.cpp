#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
int n,m;
long long a[200005];
long long dp[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	dp[0]=pow(2*1LL,31)-1*1LL;
	for (int i=1;i<=n;i++)
		for (int j=m;j>=1;j--)
		{
			dp[j]=max(dp[j],(dp[j-1]&a[i]));
		}
	printf("%lld",dp[m]);
	return 0;
}