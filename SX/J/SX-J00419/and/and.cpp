#include <bits/stdc++.h>
using namespace std;
long long a[200000], n, m, ans;

inline bool cmp(long long s, long long b) {
	return s > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long  i = 1; i <= n; i++)
		cin >> a[i];
	stable_sort(a + 1, a + 1 + n, cmp);
	ans = a[1];
	for (long long i = 2; i <= m; i++) {
		ans = ans &a[i];
	}
	cout << ans;
	return 0;
}
