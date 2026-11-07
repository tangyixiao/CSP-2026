#include<bits/stdc++.h>
using namespace std;
int dp[2005][2005];
int m,n,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> dp[i][1];
	}
	for(int i=2;i<=m;i++){
		for(int j=i;j<=n;j++){
			for(int k=i-1;k<j;k++){
				dp[j][i]=max(dp[j][i],(dp[k][i-1]&dp[j][1]));
			}
		}
	}
	for(int i=m;i<=n;i++){
		ans=max(ans,dp[i][m]);
	}
	cout << ans <<endl;
	return 0;
}
