#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010], b[32], t, d = 1, g, s[200010], x, p, q[200010], pp, ans;
bool f[200001][32];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	x = n;
	b[0] = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		q[i] = i;
		f[i][0] = 1;
		t = a[i];
		d = 1;
		while (t != 0) {
			if (t % 2 == 1) {
				f[i][d] = 1;
				b[d]++;
			}
			t /= 2;
			d++;
		}
	}
	for (int i = 32; i >= 0; i--)
		if (b[i] >= m) {
			g = i;
			break;
		}
	p = 0;
	for (int i = 1; i <= n; i++) {
		if (f[i][g] == 1) {
			p++;
			q[p] = i;
		}
	}
	x = p;
	for (int i = g - 1; i >= 0; i--) {
		pp = p;
		p = 0;
		for (int j = 1; j <= x; j++) {
			if (f[q[j]][i] == 1) {
				p++;
			}
		}
		if (p >= m) {
			p = 0;
			for (int j = 1; j <= x; j++) {
				if (f[q[j]][i] == 1) {
					p++;
					q[p] = q[j];
				}
			}
			x = p;
		}
	}
	ans = a[q[1]];
	for (int i = 1; i <= x; i++) {
		ans = ans &a[q[i]];
	}
	cout << ans;
	return 0;
}