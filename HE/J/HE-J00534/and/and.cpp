#include<bits/stdc++.h>
using namespace std;
long long n,m,dp[200005][200005],a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		dp[i][1]=max(a[i],dp[i-1][1]);
		for(int j=1;j<=m;j++){
			dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i-1][j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
