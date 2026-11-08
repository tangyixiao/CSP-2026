#include<bits/stdc++.h>
using namespace std;
int dp[20005][20005];
int a[20005];
int n,m;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
    for(int i=1;i<=n;i++){
		dp[i][1]=a[i];
	}
	for(int k=2;k<=m;k++){
         for(int i=1;i<=n;i++){ 	
			dp[i][k]=dp[i][k-1]&a[i];
			for(int j=1;j<=n;j++){
				if(i!=j)dp[i][k]=max(dp[i][k-1]&a[j],dp[i][k]);
			}
		 }
	}
	int ans=-1e8;
	for(int i=1;i<=n;i++){
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
}
/*5 3
2 31 3 1 15 7*/
