#include <bits/stdc++.h>
using namespace std;

int b[100005] = {0,}, c[100005] = {0,}, s = 0;

void z(int q, int w) {
	int t = 0, e = 1;
	s = 0;
	while (q > 0) {
		t++;
		b[t] = q % 2;
		q /= 2;
	}
	int t1 = 0;
	while (w > 0) {
		t1++;
		c[t1] = w % 2;
		w /= 2;
	}
	for (int i = 1; i <= max(t, t1); i++) {
		if (b[i] == c[i] && c[i] == 1)
			b[i] = 1;
		else
			b[i] = 0;
	}
	for (int i = 1; i <= max(t, t1); i++) {
		s += e * b[i];
		e *= 2;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, a[100005], s1 = 0;
	cin >> n >> m;
	if (m == 1)
		cout << n << endl;
	else {
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				z(a[i], a[j]);
				if (s >= s1)
					s1 = s;
			}
		}
		cout << s1 << endl;
	}

	return 0;
}
