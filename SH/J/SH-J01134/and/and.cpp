#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[n],dp[n][m];
	memset(a,0,sizeof a);
	memset(dp,0,sizeof dp);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=m;j++){
			dp[i][j]=a[i];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[i][j]=max(dp[i][j],dp[i-1][j-1]&a[i]);
		}
	}
	long long ans=0;
	for(int i=1;i<=m;i++){
		ans=max(ans,dp[n][i]);
	}
	cout<<ans<<endl;
	return 0;
}
