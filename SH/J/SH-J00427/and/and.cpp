#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 2e5 + 5;
int a[maxn], dp[30][30], vis[maxn], n, m, ans;
bool cmp(int x, int y){
	return x > y;
}

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if (n <= 20){
		for (int i = 1; i <= n; i++){
			dp[i][1] = max(dp[i - 1][1], a[i]);
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				for (int k = 2; k <= m; k++){
					dp[j][k] = max(dp[j][k], dp[i][k - 1] & a[j]);
				}
			}
		}
		cout << dp[n][m] << endl;
	}else if (m == 1){
		for (int i = 1; i <= n; i++){
			ans = max(ans, a[i]);
		}
		cout << ans << endl;
	}else if (m == n){
		ans = a[1];
		for (int i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans << endl;
	}else if (m == 2){
		for (int i = 1; i <= n - 1; i++){
			for (int j = i + 1; j <= n; j++){
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << endl;
	}else{
		sort(a + 1, a + n + 1, cmp);
		ans = a[1];
		for (int i = 2; i <= m; i++){
			ans &= a[i];
		}
		cout << ans << endl;
	}
	return 0;
}
