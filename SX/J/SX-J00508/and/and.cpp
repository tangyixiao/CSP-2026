#include <bits/stdc++.h>
using namespace std;

bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	long long n, m;
	cin >> n >> m;
	vector<long long> a(n + 5);
	for (long long i = 0; i < n; ++i)
		cin >> a[i];
	sort(a.begin(), a.end(), cmp);
	long long ans = 0;
	for (int i = m - 1; i <= n; ++i) {
		long long x = a[i - m + 1];
		for (int j = i - m + 2; j <= i; ++j) {
			x &= a[j];
		}
		if (x == a[i]) {
			cout << x;
			return 0;
		}
		ans = max(ans, x);
	}
	cout << ans;
	return 0;
}
