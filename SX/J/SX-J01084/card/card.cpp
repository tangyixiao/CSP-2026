#include <bits/stdc++.h>
using namespace std;
int a[501000], b[501000], c[501000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			b[a[j]]++;
			if (b[a[j]] > 1) {
				b[a[j]] = 1;
				for (int k = i; k <= j - 1; k++) {
					if (a[k] != a[j])
						b[a[k]] = 0;
				}
			}
		}
		for (int p = i; p <= n; p++) {
			if (b[a[p]] == 1)
				c[a[p]]++;
			b[a[p]] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
