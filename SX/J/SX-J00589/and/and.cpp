#include <bits/stdc++.h>
using namespace std;
long long a[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, f = 0, ans;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (m--) {
		long long maxx = LLONG_MIN;
		for (int i = 1; i <= n; i++) {
			if (a[i] > maxx) {
				maxx = a[i];
			}
		}
		for (int i = 1; i <= n; i++) {
			if (a[i] == maxx) {
				a[i] = 0;
				break;
			}
			if (f == 0) {
				ans = maxx;
				f = 1;
			}
		}
		ans = (ans &maxx);
	}
	cout << ans;
	return 0;
}