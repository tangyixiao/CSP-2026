#include <bits/stdc++.h>
using namespace std;
int a[500020], b[300020];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, p = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int q = 1;
		b[p] = b[p] + b[p - 1] + 1;
		if (a[i] == a[i + 1]) {
			p--;
			q = 0;
		}
		if (q == 0) {
			b[p + 1] = b[p + 1] - b[p];
		}
		p++;
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}