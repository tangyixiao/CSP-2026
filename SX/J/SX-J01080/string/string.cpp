#include <bits/stdc++.h>
using namespace std;
long long sum, len, ans;
int a[200010], c[200010], n, t = 1, d;
char cc;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> cc;
		c[i] = cc - 'a' + 1;
		sum += a[i];
	}
	d = n;
	while (t < d) {
		if (c[d] != c[t])
			ans = ans + min(a[t], a[d]);
		if (a[t] > a[d]) {
			a[t] -= a[d];
			d--;
		} else if (a[t] < a[d]) {
			a[d] -= a[t];
			t++;
		} else if (a[t] == a[d]) {
			d--;
			t++;
		}
	}
	cout << ans;
	return 0;
}