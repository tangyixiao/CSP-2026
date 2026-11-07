#include<bits/stdc++.h>
#define int long long
using namespace std;
int dp[2005][2005],n,m,a[2005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dp[1][1]=a[1];
	for(int i=2;i<=n;i++){
		dp[i][1]=max(dp[i-1][1],a[i]);
		for(int j=2;j<=i;j++) dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
	}
	cout<<dp[n][m];
	return 0;
}
