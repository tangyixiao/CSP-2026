# include <bits/stdc++.h>

using namespace std;

const int N = 2 * 1e5+5;
int n,m;
long long a[N]; 
long long dp[N][N>>10]; //前i个数选j个,最大值为 dp[i][j]
signed main(){
	
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		dp[i][1] = max(dp[i][1],a[i]);
	}
	
	
	
	for(int i = 1;i <= n;i++){
		for(int j = 2;j <= m && i >= j;j++){
			dp[i][j] = max(dp[i][j-1] & a[i],dp[i][j]);
//			printf("前%d个，选%d个，是%d\n",i,j,dp[i][j]);
		}
	}
	
	cout << dp[n][m];
	return 0;
}