#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[10001][10001],ma = -1;
int a[200005],k;
ll n,ans = -1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		ma = max(ma,a[i]);
		dp[1][i] = a[1];
		dp[i][1] = a[i];
	}
	if(k == 1){
		cout<<ma<<endl;
		return 0;
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=k;j++){
			dp[i][j] = max(dp[i][j],dp[i-1][j-1]);
			dp[i][j] = max(dp[i][j],dp[i-1][j] & a[i]);
		}
	}
	cout<<dp[n][k]<<endl;
	return 0;
}
