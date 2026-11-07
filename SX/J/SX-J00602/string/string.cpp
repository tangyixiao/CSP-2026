#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "r", stdout);
	int a, b[1000 + 10], p = 0, f = 0;
	string c[1000 + 10], q;
	cin >> a;
	if (a == 1) {
		cout << "0";
		return 0;
	}
	cin >> b[1];
	p += b[1];
	cin >> c[1];
	q = c[1];
	for (int i = 2; i <= a ; i++) {
		cin >> b[i];
		p += b[i];
		cin >> c[i];
		if (c[i] == q) {
			f += 1;
		}
	}
	if (f == a - 1) {
		cout << "0";
		return 0;
	} else if ((p % 2 != 0 ) && ( a % 2 != 0) ) {
		cout << "2";
	} else {
		cout << p / a*f;
	}
	return 0;
}