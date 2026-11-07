#include <bits/stdc++.h> 
#define ll long long 
#define rep(i, j, k) for (int i = j; i <= k; i++) 
#define dow(i, j, k) for (int i = j; i >= k; i--) 

const int N = 2e5 + 5; 

int n, m; ll a[N]; 
bool tmp[N]; 

signed main() {
//	freopen("and6.in", "r", stdin); 
	freopen("and.in", "r", stdin); 
	freopen("and.out", "w", stdout); 
	
	scanf("%d%d", &n, &m); 
	rep(i, 1, n) scanf("%lld", a + i); 
	
	rep(i, 1, n) tmp[i] = 1; 
	
	ll ans = 0; 
	dow(k, 31, 0) {
		int cnt = 0; 
		rep(i, 1, n) cnt += (tmp[i] && ((a[i] >> k) & 1)); 
		if (cnt >= m) {
			rep(i, 1, n) if (((a[i] >> k) & 1) == 0) tmp[i] = 0; 
			ans += (1ll << k); 
		}
	}
	
	printf("%lld\n", ans); 
	
	return 0; 
} 