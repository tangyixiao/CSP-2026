#include <bits/stdc++.h>
using namespace std;
int n, m, flag, ans = 1;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.ont", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (m == n) {
			ans = (ans &a[i]);
			flag = 1;
		}
	}
	if (flag == 1) {
		cout << ans;
		return 0;
	}
	sort(a + 1, a + n + 1);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, (a[i] & a[j]));
			}
		}
	}
	cout << ans;
	return 0;
}
