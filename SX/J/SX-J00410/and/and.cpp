#include <bits/stdc++.h>
using namespace std;

int cmp(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a, b, d = 1;
	cin >> a >> b;

	int c[a];
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	sort(c + 1, c + a + 1, cmp);
	d = c[1];
	for (int i = 2 ; i <= b ; i++) {
		d += d and c[i];
	}

	cout << d;
	return 0;
}
