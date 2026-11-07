#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXS = 2e5+5;
int n, m, a[MAXS], dp[MAXS];
int dfs(int x, int r){
	if (dp[x]) return dp[x];
	if (r == 0) return INT_MAX;
	int maxn = 0;
	for (int i = x+1; i <= n; i++)
		maxn = max(maxn, a[x] & dfs(i, r-1));
	dp[x] = maxn;
	return dp[x];
}
signed main(){
	// CHANGE YOUR MIND SET
	// I can't do it. -> DAMN!
	// It's too difficult for me. -> DAMN!
	// That's all my fault. -> DAMN!
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	dp[n] = a[n];
	int maxn = 0;
	for (int i = 1; i < n; i++)
		maxn = max(maxn, a[i] & dfs(i+1, m-1));
	cout << maxn;
	return 0;
}
