#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, aa, b, bb;
	cin >> a >> aa >> b >> bb;
	if (a == b) {
		cout << 1;
	} else {
		cout << 0000;
		return 0;
	}

	if (aa[0] == bb[0] && aa[1] == bb[1]) {
		cout << 1;
	} else {
		cout << 000;
		return 0;
	}

	if ((aa[2] != 'C' && bb[2] != 'D') || (aa[2] != 'D' && bb[2] != 'C')) {
		cout << 1;
	} else {
		cout << 00;
		return 0;
	}

	if ((aa[2] != 'A' && bb[2] != 'C') || (aa[2] != 'C' && bb[2] != 'A')) {
		if (aa[2] + 1 == bb[2] || bb[2] + 1 == aa[2]) {
			cout << 1;
		} else {
			cout << 0;
		}
	}
	return 0;
}