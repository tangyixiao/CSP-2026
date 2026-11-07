#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500010], t, s[300010], f = 1, b[500010], c, inst, cnt, j = 0;
bool f1;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	inst = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (n != c) {
		c = n;
		cnt = 0;
		for (int i = 1; i <= n; i++) {
			b[i - cnt] = a[i];

			if (b[i - cnt] == b[i - 1 - cnt]) {
				b[i - 1 - cnt] = b[i - cnt];
				s[b[i - cnt]]++;
				cnt++;
			} else if (b[i - cnt] == b[i - cnt - 2]) {
				b[i - cnt - 2] = b[i - cnt];
				s[b[i - cnt - 1]]++;
				s[b[i - cnt]]++;
				cnt += 2;
			}
		}

		n = n - cnt;
		for (int i = 1; i <= n  ; i++)
			a[i] = b[i];
	}
	t = a[n];
	s[t] = inst;
	for (int i = 1; i <= n; i++) {

		if (a[i] == t) {
			f = 0;
			continue;
		}
		s[a[i]] += f;
		f++;
	}
	for (int i = 1; i <= m; i++) {
		cout << s[i] << ' ';
	}
	return 0;
}
