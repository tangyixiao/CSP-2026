#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[200005], m, n;
int ans = -1;
int no;
bool v[200005];
void dfs(int k, int sum){
	if(k >= m){
//		cout << sum << '\n';
		ans = max(ans, sum);
		return ;
	}
	for(int i = 1; i <= n; i++){
		if(!v[i]){
			v[i] = 1;
			dfs(k + 1, k == 0 ? a[i]: sum & a[i]);
			v[i] = 0;
		}
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	ll mx = -1, mn = 1e18, mm;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		mx = max(mx, (ll)a[i]);
		if(a[i] < mn){
			mn = a[i];
			mm = i;
		}
	} 
	if(m == 1){
		cout << mx ;
		return 0;
	}
	if(m == n - 1){
		ll ans = 0;
		for(int i = 1; i <= n; i++){
			if(i == mm) continue;
			if(ans == 0) ans = a[i];
			else ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(n == m){
		ll ans = a[1];
		for(int i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	dfs(0, 0);
	cout << ans;
	return 0;
}
/*
5 3
31 3 1 15 7

*/
