#include <bits/stdc++.h>
using namespace std;
long long a, A, c, C;
string  b, B;
bool d, D;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> A >> B;
	if (a == A) {
		cout << 1;
	} else {
		cout << 0;
	}
	c = (b[0] - '0') * 10 + b[1] - '0';
	C = (B[0] - '0') * 10 + B[1] - '0';
	if (a == A && c == C) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
		d = 1;
	}
	if (B[2] == 'A' || B[2] == 'B' || B[2] == 'C') {
		D = 1;
	}
	if (a == A && c == C && d == D) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (a == A && c == C && d == D && abs(b[2] - B[2]) == 1	) {
		cout << 1;
	} else {
		cout << 0;
	}
//	cout << "\n" << c << " " << C;
	return 0;
}
