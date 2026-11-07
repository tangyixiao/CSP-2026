#include <bits/stdc++.h>
using namespace std;
long long n, m, ans;
long long a[200005];

inline bool cmp(int x, int y) {
	return x > y;
}

int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	stable_sort(a + 1, a + n + 1, cmp);
	ans = a[1];
	if (m == 1)
		cout << ans;
	for (int i = 2; i <= m; i++) {
		ans = ans | a[i];
	}
	cout << ans;

	return 0;
}
