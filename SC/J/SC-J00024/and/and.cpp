#include <bits/stdc++.h>

#define int long long

using namespace std;

constexpr int N = 2e5 + 10;

int n, m, result = LLONG_MIN;

int a[N];

int pos[N];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for (int i = 31; i >= 0; i--) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j] & (1 << i)) {
				pos[++cnt] = j;
			}
		}
		if (cnt == m) {
			result = a[pos[1]];
			for (int k = 2; k <= cnt; k++) {
				result &= a[pos[k]];
			}
			cout << result << '\n';
			return 0;
		}
	} 

	return 0;
}