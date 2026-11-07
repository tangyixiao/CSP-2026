#include <bits/stdc++.h>
using namespace std;
long long a[200001];

bool cmp(long x, long y) {
	return (x >= y);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, k;
	cin >> n >> k;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	long long ans = a[1];
	for (int i = 2; i <= k; i++) {
		ans &= a[i];
	}
	cout << ans;
	return 0;
}
