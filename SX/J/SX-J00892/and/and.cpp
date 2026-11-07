#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
bool b[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, ans = -1;
	cin >> n >> m;
	m -= 2;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 1)
			continue;
		for (int j = 1; j <= n; j++) {
			if (b[j] == 1)
				continue;
			ans = max(ans, a[i] & a[j]);
			if (ans == a[i] & a[j]) {
				for (int k = 1; k <= n; k++) {
					b[k] = 0;
				}
				b[i] = 1, b[j] = 1;
			}
		}
	}
	cout << ans << " ";
	while (m > 0) {
		int s;
		for (int i = 1; i <= n; i++) {
			if (b[i] == 1)
				continue;
			ans = max(ans, ans &a[i]);
			s = i;
		}
		b[s] = 1;
		m--;
		cout << a[s] << " ";
	}
	cout << ans;
	return 0;
}
