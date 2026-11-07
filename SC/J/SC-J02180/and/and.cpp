#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5,M=1e4+5000;
int dp[M][M],a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1][1]=a[1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][1]=a[i];
			for(int k=1;k<i;k++){
				dp[i][j]=max(dp[i-k][j-1]&a[i],dp[i][j]);
			}
		}
	}
	cout<<dp[n][m];
	return 0;
}