#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int A[5], B[5], C[5], D[5];
char e[5], f[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << '1';
	} else {
		cout << "0000";
		return 0;
	}
	bool flag = true;
	for (int i = 0; i < b.size(); i++) {

		if (b[i] >= '0' && b[i] <= '9') {
			B[i] = b[i] - '0';
		}
		if (d[i] >= '0' && d[i] <= '9') {
			D[i] = d[i] - '0';
		}
		if (B[i] != D[i]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << '1';
	} else {
		cout << '0';
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] >= 'A' && b[i] <= 'Z') {
			e[1] = b[i];
		}
		if (d[i] >= 'A' && d[i] <= 'Z') {
			f[1] = d[i];
		}
	}
	bool p = true;
	if ((e[1] >= 'A' && e[1] <= 'C') && (f[1] >= 'A' && f[1] <= 'C') && flag) {
		cout << '1';
	} else if ((e[1] >= 'D' && e[1] <= 'F') && (f[1] >= 'D' && f[1] <= 'F') && flag) {
		cout << '1';
	} else {
		cout << '0';
		p = false;
	}
	if ((e[1] + 1 == f[1] || e[1] - 1 == f[1]) && p) {
		cout << '1';
	} else {
		cout << '0';
	}
	return 0;
}
