#include <bits/stdc++.h>
using namespace std;

int a[10010], c[10010];

void f(int s[10010], int m) {
	for (int i = 1; i <= m; i++) {
		s[i] = 0;
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int cs[10010] = {0};
		for (int j = i; j <= n; j++) {
			if (cs[a[j]] != 0)
				f(cs, m);

			cs[a[j]] = 1;
		}
		for (int k = 1; k <= m; k++) {
			if (cs[k]) {

				c[k]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << ' ';
	}
	return 0;
}