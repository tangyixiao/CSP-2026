#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, a1, b, b1;
	cin >> a >> a1 >> b >> b1;
	int p = -1;
	for (int i = 0; i < 2; i++) {
		if (a[i] != b[i]) {
			p = 1;
			break;
		}
	}
	if (p == 1) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	} else {
		cout << 1;
	}
	for (int i = 0; i < 2; i++) {
		if (a1[i] != b1[i]) {
			p = 1;
			break;
		}
	}
	if (p == 1) {
		cout << 0 << 0 << 0;
		return 0;
	} else {
		cout << 1;
	}
	int ans = 0;
	if (a1[2] >= 'A' && a1[2] <= 'C' && b1[2] >= 'A' && b1[2] <= 'C') {
		cout << 1;
		if (abs(a1[2] - b1[2]) == 2) {
			ans = 1;
		}
	} else {
		int o = 0, i = 0;
		if (a1[2] == 'D' || a1[2] == 'F') {
			o = 1;
		}
		if (b1[2] == 'D' || b1[2] == 'F') {
			i = 1;
		}
		if (o == i && o == 1 && i == 1) {
			cout << 1;
		} else {
			cout << 0 << 0;
			return 0;
		}
	}
	if (abs(a1[2] - b1[2]) == 1 || ((abs(a1[2] - b1[2]) == 2) && ans == 0)) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}