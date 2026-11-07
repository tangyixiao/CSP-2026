#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], ans;
bitset<200005>g, z, x;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		z[i] = true;
		cin >> a[i];
	}
	for (long long i = 29; i >= 0; i--) {
		long long sum = 0;
		for (long long j = 1; j <= n; j++) {
			if (a[j] & (1 << i)) {
				g[j] = true;
				if (z[j])
					sum++;
			} else
				g[j] = false;
		}
		if (sum >= m) {
			z &= g;
			ans += (1 << i);
		}
	}
	cout << ans;
	return 0;
}