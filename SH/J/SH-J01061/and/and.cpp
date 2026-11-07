#include <bits/stdc++.h>
using namespace std;

const int N = 200100;

int n, m;
int a[N];
int dp[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	int ma = INT_MIN;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ma = max(ma, a[i]);
	}
	
	memset(dp, 0, sizeof dp);
	
	if (m == 1) {
		cout << ma;
		return 0;
	}
	
	for (int i = 0; i <= n; i++)
		dp[i] = ma;
	
	for (int i = 2; i <= m; i++)
		for (int j = i; j <= n; j++)
			dp[j] = max(dp[j - 1], dp[j]) & a[j];
	
	cout << dp[n];
	
	return 0;
}
