#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans, ch, hyw;

int kpow(int y, int z) {
	int sum = 1;
	for (int i = 1; i <= z; i++) {
		sum *= y;
	}
	return sum;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == n) {
		ans = kpow(2, 20) - 1;
		for (int i = 1; i <= n; i++)
			ans &= a[i];
		cout << ans;
	}
	long long x = (1 << n) - 1;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= x; i++) {
		hyw = x;
		ch = 0;
		for (int j = 1; j <= n; j++) {
			if ((1 << (j - 1)) & i) {
				ch++;
				hyw &= a[n - j + 1];
			}

		}
		if (ch == m)
			ans = max(ans, hyw);
	}
	cout << ans;
	return 0;
}
