#include<bits/stdc++.h>
using namespace std;
const int N=2e4+5;
int n,m,a[N],dp[N][N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++) dp[i][1]=a[i];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			dp[i][j]=max(dp[i-1][j-1]&a[i],max(dp[i-1][j],dp[i][j]));
		}
	}
	int ans=0;
	for (int i=1;i<=n;i++){
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
	return 0;
}
