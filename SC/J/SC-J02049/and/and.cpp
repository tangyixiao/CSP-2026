#include<bits/stdc++.h>
using namespace std;
long long a[200005],dp[200005][200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	long long maxn=-1;
	memset(dp,1,sizeof(dp));
	for(int i=m;i<=n;i++){
		for(int j=1;j<=m;j++)
			for(int k=1;k<i;k++)
				dp[i][j]=max(dp[i][j],dp[k][j+1]&a[i]);
		if(i>=m) maxn=max(maxn,dp[i][m]);
	}
	cout<<maxn;
	return 0;
} 