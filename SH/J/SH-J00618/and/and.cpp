#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 2005;
ll n, m, a[N], dp[N][N], ans;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(ll i = 1; i <= n; ++ i){
		cin >> a[i];
	}
	
	if(m == n){
		ans = a[1];
		for(ll i = 2; i <= n; ++ i)
			ans &= a[i];
		cout << ans;
		return 0;
	}
	if(m == n - 1){
//		return 0;
	}
	
	//A
	bool flag = true;
	for(int i = 1; i <= n; ++ i){
		bool fg = false;
		for(int j = 0; j <= 30; ++ j)
			if(a[i] == (1 << j) - 1){
				fg = true;
				break;
			}
		if(!fg){
			flag = false;
			break;
		}
	}
	if(flag){
		sort(a + 1, a + n + 1);
		cout << a[n - m + 1];
		return 0;
	}
	return 0;
	//B
	bool fg = false;
	for(ll j = 0; j <= 30; ++ j)
		if(n == 1 << j){
			fg = true;
			break;
		}
	if(fg){
		bool flag = true;
		for(ll i = 1; i <= n; ++ i)
			if(a[i] != i - 1){
				flag = false;
				break;
			}
		if(flag){
			cout << a[n];
			return 0;
		}
	}
	
	for(ll i = 1; i <= n; ++ i){
		dp[i][1] = a[i];
//		cout << dp[i][1] << ' ';
		for(ll j = 2; j <= min(i, m); ++ j){
			dp[i][j] = dp[i - 1][j];
			for(ll k = j - 1; k < i; ++ k)
				dp[i][j] = max(dp[i][j], dp[k][j - 1] & a[i]);
//			cout << dp[i][j] << ' ';
		}
//		cout << endl;
		ans = max(ans, dp[i][m]);
	}
	cout << ans;
	return 0;
}
