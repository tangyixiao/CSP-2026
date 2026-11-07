#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "r", stdout);
	int a, b, c[10000], d[10000], p = 1, x = 1;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	sort(c + 1, c + a + 1);
	p = c[a] & c[a - 1];
	for (int i = a - 12; i >= a - b - 1; i--) {
		p = p &c[i];
	}
	cout << p;
	return 0;
}