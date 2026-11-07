#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
long long n, m, a[N], b[N], c[N], f, s[N], v[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (b[a[j]] != 0 && b[a[j]] > f) {
				c[b[a[j]] + 1] = -1;
				f = j;
			} else {
				b[a[j]] = j;
			}
		}
		for (int j = i; j <= n; j++) {
			if (c[i] != -1) {
				c[i] = -1;
				if (v[c[i]] == 0) {
					v[c[i]] = 1;
					s[c[i]]++;
				}
			}
		}
		for (int j = 1; j <= n; j++) {
			b[i] = 0;
			c[i] = 0;
		}
		memset(v, 0, sizeof(v));
	}
	for (int i = 1; i <= m; i++) {
		cout << s[i] << " ";
	}
	return 0;
}
