#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2005],dp[2005][2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i][0]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m&&j<=i;j++){
			for(int k=1;k<i;k++){
				dp[i][j]=max(dp[k][j],dp[k][j-1]&a[k]);
			}
			dp[i][j]=max(dp[i][j],dp[i][j-1]&a[i]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
