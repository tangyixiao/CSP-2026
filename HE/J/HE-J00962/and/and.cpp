#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 50;
int n, m, a[N], ans;
bool f[N];
signed main () {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	ios :: sync_with_stdio(0);
	cin . tie(0), cout . tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		f[i] = 1;
	}
	for (int i = 31; i >= 0; i --) {
		int cnt = 0;
		for(int j = 1; j <= n; j ++) {
			if ((a[j] & (1 << i)) && f[j]) {
				cnt ++;
			}
		}
		if (cnt >= m) {
			ans += 1 << i;
			for(int j = 1; j <= n; j ++) {
				if (! (a[j] & (1 << i))) {
					f[j] = 0;
				}
			}
		} 
	}
	cout << ans << '\n'; 
	return 0;
}
 
