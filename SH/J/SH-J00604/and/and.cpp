#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m;
LL nmm[200010];
LL dp[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		cin>>nmm[i];
	}
	dp[1]=nmm[1];
	for(int i=2;i<=n;i++)
	{
		int vall=0;
		if(m>=i) vall=i;
		else vall=m;
		for(int j=vall;j>=1;j--)
		{
			dp[j]=max(dp[j],dp[j-1]&nmm[i]);
			if(j==1) dp[j]=max(nmm[i],dp[j]);
//			cout<<dp[j]<<' ';
		}
//		cout<<endl;
	}
	
	cout<<dp[m];
	return 0;
}
//Trick||Treat!
