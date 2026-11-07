#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m,dp[200005][200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==n){
		int k=a[1];
		for(int i=2;i<=n;i++) k=k&a[i];
		cout<<k;
		return 0;
	}
	for(int i=1;i<=m;i++) dp[i][1]=max(dp[i-1][1],a[i]);
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++) ans=max(ans,dp[i][m]);
	cout<<ans;
} 
