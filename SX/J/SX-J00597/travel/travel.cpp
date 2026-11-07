#include <bits/stdc++.h>
using namespace std;
string r, x, a, b;
int f = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r >> a >> x >> b;
	int p, q;
	p = a[2] - 'A';
	q = b[2] - 'A';
	int n = p - q;
	if (r == x) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (a[0] == b[0] && a[1] == b[1]) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (a[0] == b[0] && a[1] == b[1]) {
		if ((a[2] <= 'C' && a[2] >= 'A' && b[2] <= 'C' && b[2] >= 'A') || (a[2] <= 'E' && a[2] >= 'D' && b[2] <= 'E'
		        && b[2] >= 'D')) {
			cout << "1";
		} else {
			cout << "00";
			return 0;
		}
	} else {
		cout << "0";
	}
	if (a[0] == b[0] && a[1] == b[1]) {
		if (n == 1 || n == -1) {
			cout << "1";
		} else {
			cout << "0";
		}
	} else {
		cout << "0";
	}

	return 0;
}