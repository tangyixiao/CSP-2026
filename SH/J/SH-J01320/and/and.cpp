#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int dp[200020][3],a[200020];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		dp[i][1]=a[i];
	}
	for(int j=2;j<=m;j++) {
		for(int i=j;i<=n;i++) {
			for(int k=j-1;k<=i-1;k++){
				dp[i][j%2]=max(dp[i][j%2],dp[k][1-j%2]&a[i]);
			}
		}
		for(int i=j-1;i<=n;i++) dp[i][1-j%2]=0;
	}
	int ans=0;
	for(int i=m;i<=n;i++) {
		ans=max(ans,dp[i][m%2]);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
