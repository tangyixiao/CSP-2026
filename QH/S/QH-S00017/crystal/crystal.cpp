#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int M = 2e4 + 10;
int a[N];
int dp[M][M];
int n, m;
void print() {
	for(int i =  1; i <= n; i ++) {
		for(int j = 0; j <= m; j ++) {
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	return ;
}
int main() {
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin >> n >> m;

	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for(int i = 1; i <= n; i ++) {
		for(int j = 0; j <= m; j ++) {
			dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i - 1][j - (a[i] - a[i - 1]) * (i - 1)] + 1));
		}
	}
//	print();
	cout << dp[n][m];
	return 0;
}
