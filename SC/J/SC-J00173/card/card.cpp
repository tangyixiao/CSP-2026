#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin >> m >> n;
	int a[m];
	for (int i = 0;i < m;i++){
		cin >> a[i];
	}
	int dp[m][m];
	for (int i = 1;i < m;i++){
		for (int j = 1;j < m;j++){
			dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout << dp[m][n];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 