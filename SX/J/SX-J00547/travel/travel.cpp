#include <bits/stdc++.h>
using namespace std;
char a[5], b[5], c[5], d[5];
bool lf;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= 2; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> d[i];
	}
	for (int i = 1; i <= 2; i++) {
		if (a[i] != c[i]) {
			lf = 1;
		}
	}
	if (lf == 0) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	lf = 0;
	for (int i = 1; i <= 2; i++) {
		if (b[i] != d[i]) {
			lf = 1;
		}
	}
	if (lf == 0) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (b[3] >= 'A' && b[3] <= 'C' && d[3] >= 'A' && d[3] <= 'C') {
		cout << 1;
		if (b[3] + 1 == d[3] || b[3] - 1 == d[3]) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else if (b[3] >= 'D' && b[3] <= 'F' && d[3] >= 'D' && d[3] <= 'F') {
		cout << 1 << 1;
	} else {
		cout << 0 << 0;
	}
	return 0;
}
