#include <bits/stdc++.h>

using namespace std;
const int SZ = 2e5 + 5;

int n, m;
long long ans = 0;
long long a[SZ];

int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	for (int k = 40; k >= 0; k--) {
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] >> k & 1LL) cnt++;
		}
		if (cnt >= m) {
			ans |= (1LL << k);
			for (int i = 1; i <= n; i++) {
				if (!(a[i] >> k & 1LL)) a[i] = 0;
			}
		}
	}
	
	cout << ans;
	return 0;
}