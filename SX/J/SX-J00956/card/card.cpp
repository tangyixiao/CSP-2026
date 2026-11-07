#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10, M = 3e5+10;
long long n, m, a[N], s[M], r, b[N], s1[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	r = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			s[j] = 0;
		}
		for (int j = i; j <= n; j++) {
			if (s[j] == 0) {
				s[a[j]]++;
				b[r] = a[j];
				r++;
			} else {
				for (int k = r; k >= 1; k--) {
					if (b[k] != a[j]) {
						b[k] = 0;
					} else {
						r = k;
						break;
					}
				}
			}
		}
		for (int j = 1; j <= r; j++) {
			if (b[j] == i) {
				s1[i]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << s1[i] << " ";
	}
	return 0;
}
