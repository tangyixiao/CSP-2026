#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define bep(i, a, b) for(int i = (a); i >= (b); i--)
using namespace std;
const int maxn = 2e3 + 5, maxm = 2e3 + 5;
int n, m;
int a[maxn], dp[maxn][maxm];
int main() { 
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	rep(i, 1, n) {
		cin >> a[i];
		dp[i][1] = a[i];
	}
	int maxx = INT_MIN;
	rep(i, 1, n) {
		rep(j, 2, m) {
			rep(k, 1, i - 1) {
				dp[i][j] = max(dp[i][j], dp[k][j - 1] & a[i]);
			}
			if(j == m) {
				maxx = max(maxx, dp[i][j]);
			}
		}
	}
	cout << maxx << "\n";
	return 0;
}
