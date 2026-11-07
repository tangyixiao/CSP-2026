#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("sting.in", "r", stdin);
	freopen("sting.out", "w", stdout);
	char a[100001], b;
	int i, n, m, j, s = 1, x = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> m >> b;
		for (j = 1; j <= m; j++) {
			a[s] = b;
			s++;
		}
	}
	for (i = 1; i <= s; i++) {
		if (a[i] != a[s + 1 - i]) {
			a[s + 1 - i] = a[i];
			x++;
		}
	}
	cout << x;
	return 0;
}
