#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int dp[200010], w[200010];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> w[i];
	}
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			dp[i] = max(dp[i], dp[i - 1] & w[j]);
		}
	}
	cout << dp[m];
} 
