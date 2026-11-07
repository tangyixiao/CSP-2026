#include <bits/stdc++.h>
using namespace std;
// 10:54Íê³É 

constexpr int maxn = 2e5 + 10;
int dp[maxn], w[maxn];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	memset(dp, -0x3f3f3f3f, sizeof(dp));
	dp[0] = INT_MAX;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> w[i];
	}
	
	sort(w + 1, w + n + 1);
	for (int i = 1; i <= n; i ++) {
		for (int j = m; j >= 1; j --) {
			dp[j] = max(dp[j], dp[j - 1] & w[i]);
		}
	}
	
//	for (int i = 1; i <= m; i ++) {
//		cout << dp[i] << " ";
//	}
	cout << dp[m];
	return 0;
} 
