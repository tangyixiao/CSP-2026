# include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, V;
	cin >> n >> V;
	
	vector<int> v(n + 1, 0);
	vector<int> w(n + 1, 0);
	
	for (int i = 1; i <= n; ++i) {
		cin >> v[i];
		w[i] = 1;
	} 
	
	vector<int> dp(V + 1, INT_MIN);
	
	dp[0] = 0;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = V; j >= w[i]; --j) {
			if (dp[j - w[i]] == 0) {
				dp[j] = max(dp[j], v[i]);
			} else {
				dp[j] = max(dp[j], (dp[j - w[i]] & v[i]));
			}
		}
	}
	
	cout << dp[V];
	return 0;
}
