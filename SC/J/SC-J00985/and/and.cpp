#include<bits/stdc++.h>
using namespace std;
const int N = 2005; 
int n, m, f[N][N], a[N], ans = 0;
int check(int x) {
	int sum = 0;
	for (int i = 0; i < n; i ++) {
		if (sum == 0 && (x & (1 << i))) sum = a[i+1];
		if (x & (1 << i)) sum &= a[i];
	}
	return sum;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout); 
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) cin >> a[i];
	if (n <= 25) {
		for (int i = 0; i < (1 << n); i ++) {
			ans = max(ans, check(i));
		}
		cout << ans << "\n";
	} else {
		ans = a[1];
		sort(a+1, a+n+1);
		ans = a[n];
		for (int i = n; i >= n-m+1; i --) ans &= a[i];
		cout << ans << "\n";
	}
	return 0;
}
