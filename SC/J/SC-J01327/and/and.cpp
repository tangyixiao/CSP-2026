#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e3 + 5;
int a[N];
int dp[N][N]; 

signed main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int tot = 1;
	for(int i = 1; i <= n; i++){
		tot &= a[i];
	}
	if(m == n){
		cout << tot;
		return 0;
	}
	if(m == n - 1){
		int ans = 0;
		for(int i = 1; i <= n; i++){
			ans = max(ans, tot ^ (a[i] - 1));
		}
		cout << ans;
		return 0;
	}
	if(m == 1){
		int ans = 0;
		for(int i = 1; i <= n; i++){
			ans = max(ans, a[i]);
		}
		cout << ans;
		return 0;
	}
	if(m == 2){
		int ans = 0;
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){ 
				ans = max(ans, (a[i] & a[j]));
			}
		}
		cout << ans;
		return 0;
	}
	bool has = 1;
	for(int i = 1; i <= n; i++){
		int x = a[i];
		while(x > 0){
			if(x % 2 != 0){
				has = 0;
				break;
			}
			x /= 2;
		}
	}
	if(has){
		sort(a + 1, a + 1 + n);
		cout << a[n - m + 1];
		return 0; 
	}
	
	return 0;
}
/*
3 : 11
15 : 1111
12 : 1100
*/