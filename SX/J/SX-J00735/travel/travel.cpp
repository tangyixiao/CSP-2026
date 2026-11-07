#include <bits/stdc++.h>
using namespace std;
long long i, n, m, k;
string c1, c2, a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> a >> c2 >> b;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	i = (a[0] - '0' ) * 10 + a[1] - '0';
	n = (b[0] - '0' ) * 10 + b[1] - '0';
	if (i == n) {
		cout << "1";
		k = 1;
	} else {
		cout << "0";
	}
	if (k == 1 && (a[2] >= 'A' && a[2] <= 'C') && (b[2] >= 'A' && b[2] <= 'C')) {
		cout << "1";
		m = 1;
	} else {
		if (k == 1 && (a[2] == 'D' || a[2] == 'F') && (b[2] == 'D' || b[2] == 'F')) {
			cout << "1";
		} else {
			cout << "0";
		}
	}
	if (m == 1 && k == 1) {
		if ((a[2] == 'A' && b[2] == 'C') || (b[2] == 'A' && a[2] == 'C')) {
			cout << "0";
		} else {
			cout << "1";
		}
	} else {
		cout << "0";
	}
	return 0;
}
