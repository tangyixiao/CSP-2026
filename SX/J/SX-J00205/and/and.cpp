#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1 << 30; i >= 1; i >>= 1) {
		int sum = 0, b = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j] >= i) {
				sum++;
			}
		}
		if (sum >= m) {
			ans += i;
			b = 1;
		}
		for (int j = 1; j <= n; j++) {
			if (b && a[j] < i)
				a[j] = 0;
			if (a[j] >= i)
				a[j] -= i;
		}
	}
	cout << ans;
	return 0;
}
