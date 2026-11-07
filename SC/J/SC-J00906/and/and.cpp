#include<bits/stdc++.h>
using namespace std;
int n,dp[5005][5005],a[100005],ans=-2e9,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1][1]=a[1];
	for(int i=2;i<=n;i++){
		dp[i][1]=max(a[i],dp[i-1][1]);
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=min(i,m);j++){
			for(int k=1;k<=i;k++){
				dp[i][j]=max(dp[i][j],dp[k][j-1]&a[i]);
//				cout<<'i'<<i<<" j"<<j<<" dp"<<dp[i][j]<<'\n'; 
			}
		}
	}
//	for(int i=m;i<=n;i++){
//		if(dp[i][m]>ans){
//			ans=dp[i][m];
////			cout<<"*"<<i<<' '<<ans<<'\n';
//		}
//	}	
	cout<<dp[n][m];
	return 0;
}
