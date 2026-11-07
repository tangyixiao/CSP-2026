#include <bits/stdc++.h>
using namespace std;
long long n, m, ans = 0, a[200010];

bool bbb(long long x) {
	long long num = 0;
	for (long long i = 0; i < n; i++) {
		if (((x >> i) & 1) == 1)
			num++;
	}
	if (num == m)
		return 1;
	return 0;
}

void aaa(long long x) {
	long long sum = 0;
	bool f = 0;
	for (long long i = n - 1; i >= 0; i--) {
		if (((x >> i) & 1) == 1) {
			if (f == 0) {

				f = 1;
				sum = a[i + 1];
			} else
				sum = sum & a[i + 1];
		}
	}
	ans = max(ans, sum);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (long long i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == n) {
		ans = a[1];
		for (long long i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	for (long long i = 1; i < (1 << n); i++) {
		if (bbb(i) == 0)
			continue;
		aaa(i);
	}
	cout << ans;
	return 0;
}
