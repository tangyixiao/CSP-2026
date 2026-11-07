#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], cnt[200005], ans = 0;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
		ans = min(a[1], a[i]);
	}
	for (long long i = 1; i <= n; i++) {
		if (cnt[a[i]] >= m) {
			ans = max(ans, a[i]);
		}
	}
	cout << ans << endl;
	return 0;
}
