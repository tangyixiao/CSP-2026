#include <bits/stdc++.h>
using namespace std;
long long k = LLONG_MIN;
long long n, x, m, a[200010], ma[200010], o, l[200010], p = 1, jl[200010], v;
string s[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		while (a[i] > 0) {
			s[x] += (a[i] % 2 + '0');
			a[i] = a[i] / 2;
			x++;
		}
	}
	for (int d = 1; d <= m; d++) {
		o = 0;
		for (int i = 1; i <= n; i++) {
			o = 0;
			for (int j = 0; j <= s[i].size() - 1; j++) {
				if (s[i][j] == '1') {
					o++;
				}
			}
			if (o > ma[k]) {
				ma[k] = o;
			}
		}
		o = 0;
		for (int i = 1; i <= n; i++) {
			o = 0;
			for (int j = 0; j <= s[i].size() - 1; j++) {
				if (s[i][j] == '1') {
					o++;
				}
			}
			if (o == ma[k]) {
				l[k] = i;
				for (int j = 0; j <= s[i].size() - 1; j++) {
					s[i][j] = '0';
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i == l[p]) {
			jl[p] = a[i];
			p++;
		}
	}
	v = jl[1];
	for (int i = 2; i <= p; i++) {
		v = v &jl[i];
	}
	cout << v;
	return 0;
}
