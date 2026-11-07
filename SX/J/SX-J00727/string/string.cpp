#include <bits/stdc++.h>
using namespace std;
long long a, b, sum;
char c, n[99999], v[99999], e[99999];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	int g, m = 0;
	for (int i = 0; i <= a - 1; i++) {
		cin >> b >> c;
		m += b;
		for (int j = g; j < g + b; j++) {
			n[j] = c;
		}
		g = g + b;
	}

	int t = 0;
	for (int i = m - 1; i >= 0; i--) {
		v[t] = n[i];
		t++;
	}
	for (int i = 0; i <= m - 1 ; i++) {
		if (n[i] != v[i]) {
			sum++;
		}
	}
	cout << sum / 2;
	return 0;
}
