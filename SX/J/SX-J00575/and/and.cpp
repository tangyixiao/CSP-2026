#include <bits/stdc++.h>
using namespace std;

int n, m, a[200005];

bool cmp(const int &f, const int &s) {
	return __popcount(f) < __popcount(s);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, cmp);

	int ans, fix = 1;
	if (a[n] == 0) {
		ans = a[n - 1];
		fix = 0;
	}

	else
		ans = a[n];

	for (int i = (fix == 0 ? n - 2 : n - 1); i >= n - m + fix; i--) {
		ans &= a[i];
	}
	cout << ans << endl;
	return 0;
}
