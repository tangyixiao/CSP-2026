#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+5;
ll n, m, a[N], f[N], ans, ans1, qqq;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	qqq = a[1];
	for (int i = 2; i <= n; i++)
		qqq &= a[i];
	stable_sort(a + 1, a + 1 + n);
	if (m == 1)
		cout << a[n];
	else if (m == n)
		cout << qqq;
	else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				ans1 = max(ans1, (a[i] & a[j]));
			}
		}
		cout << ans1;
	} else {
		ans = a[n];
		for (int i = n - 1; i >= m; i--)
			ans = (ans & a[i]);
		cout << ans;
	}

	return 0;
}