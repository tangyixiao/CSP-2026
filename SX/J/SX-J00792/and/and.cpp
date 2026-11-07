#include <bits/stdc++.h>
using namespace std;
int n, m, a[6000010], ans;

int main() {
//	freopen("card.in", "r", stdin);
//	freopen("card.out", "w", stdout);
	cin >> n;
	cin >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m = 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
	} else if (m == n) {
		for (int i = 1; i <= n; i++) {
			ans = (a[i] | ans );
			cout << ans;
		}
	}
	return 0;
}