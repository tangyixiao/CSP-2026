#include <bits/stdc++.h> 
#define ll long long 
#define rep(i, j, k) for (int i = j; i <= k; i++) 
#define dow(i, j, k) for (int i = j; i >= k; i--) 

const int N = 2e5 + 5; 

int n, a[N]; 
char c[N]; 

signed main() {
//	freopen("string6.in", "r", stdin); 
	freopen("string.in", "r", stdin); 
	freopen("string.out", "w", stdout); 
	
	scanf("%d", &n); 
	rep(i, 1, n) scanf("%d %c", a + i, c + i); 
	
	ll ans = 0; 
	int l = 1, r = n; 
	while (l < r) {
//		printf("%d(%d) %d(%d) ", l, a[l], r, a[r]); 
		if (a[l] < a[r]) {
			if (c[l] != c[r]) ans += a[l]; 
			a[r] -= a[l]; a[l] -= a[l]; l++; 
		} else if (a[l] > a[r]) {
			if (c[l] != c[r]) ans += a[r]; 
//			printf("- %d\n", a[r]); 
			a[l] -= a[r]; a[r] -= a[r]; r--; 
		} else {
			if (c[l] != c[r]) ans += a[l]; 
			a[r] -= a[l]; a[l] -= a[l]; l++; r--; 
		}
//		printf("%lld\n", ans); 
	}
	printf("%lld\n", ans); 
	
	return 0; 
} 