#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=2e5+10;
const int M=2e3+10;
int n,m,a[N],dp[N][M],ans=0;
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i][1]=a[i];
	}
//	sort(a+1,a+1+n);

	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			dp[i][j]=max(dp[i-1][j],a[i]&dp[i-1][j-1] );
			
		}
		ans=max(dp[i][m],ans);
	}
	
	cout<<ans;
	return 0;
}
