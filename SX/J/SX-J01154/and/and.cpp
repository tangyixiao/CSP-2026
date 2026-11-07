#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	long long ans;
	cin >> n >> m;
	int a[200010];
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a, a + n + 1);
	ans = a[n];
	if (ans % 2 == 0) {
		ans = a[n - 1];
		for (long long i = n - 1; i > n - 1 - m; i--) {
			ans = ans &a[i];
		}
	} else {
		for (long long i = n; i > n - m; i--) {
			ans = ans &a[i];
		}
	}
	cout << ans;
	return 0;
}
