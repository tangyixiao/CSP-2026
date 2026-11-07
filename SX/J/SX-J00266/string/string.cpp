#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a;
	long long d = 0, m = 0, n = 0;
	string f, e;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		int y;
		cin >> y;
		d += y;
		string u;
		cin >> u;
		f[i] + u;
		m++;
	}
	for (int i = m; i >= 1; i--) {
		e[n] += f[i];
		n++;
	}
	if (e == f) {
		cout << 0;

	} else {
		cout << d / 2 - 1;
	}
}