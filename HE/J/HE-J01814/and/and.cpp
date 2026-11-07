#include <bits/stdc++.h>
using namespace std;
int n,m,a[200002];
int dp[20002][20002];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
		
	}
	sort(a+1,a+n+1);
	for (int i = 0;i < n;i++){
		dp[i][0] = a[i+1];
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= m;j++){
			dp[i][j] = max(dp[i-1][j-1]&a[i],dp[i-1][j]);
		}
	}
	cout << dp[n][m];
	return 0;
}
