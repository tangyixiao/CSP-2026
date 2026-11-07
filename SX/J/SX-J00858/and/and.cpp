#include <bits/stdc++.h>
using namespace std;
long long n, m, ans;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + n + 1, greater<int>());
	ans = a[1];
	for (int i = 1; i <= m; i++) {
		if (i == m)
			break;
		ans = ans &a[i + 1];
	}
	cout << ans;
	return 0;
}