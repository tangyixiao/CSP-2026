#include<bits/stdc++.h>
using namespace std;
const int MAXN=2005;
int maxn=-1;
int a[MAXN];
int dp[MAXN][MAXN]={},n,m;//dp[i][j]前i个选j个最大 
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		dp[1][i]=a[i];
	}
	ans=a[1];
	for(int i=2;i<=n;i++) ans&=a[i];
	if(m==n) cout<<ans;
	for(int j=2;j<=m;j++)
	{
		for(int i=j;i<=n;i++)
		{
			for(int k=i-1;k<=n;k++)
			{
				dp[i][j]=max(dp[i][j],(a[i]&dp[j-1][k-1]));
			}
		}
	}
	printf("%d\n",dp[n][m]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}