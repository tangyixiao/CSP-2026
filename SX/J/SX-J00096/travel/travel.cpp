#include <bits/stdc++.h>
using namespace std;
string a, b, c, d, s1, s3;
char  s2, s4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	s1 = b[0] + b[1];
	s2 = b[2];
	s3 = d[0] + d[1];
	s4 = d[2];
	if (a == c) {
		cout << 1;
		if (s1 == s3) {
			cout << 1;
			if (s2 == 'A' and s4 == 'B') {
				cout << 11;
			} else if (s2 == 'A' and s4 == 'C') {
				cout << 10;
			} else if (s2 == 'B' and s4 == 'C') {
				cout << 11;
			} else if (s2 == 'D' and s4 == 'F') {
				cout << 11;
			} else if (s2 == 'B' and s4 == 'A') {
				cout << 11;
			} else if (s2 == 'C' and s4 == 'A') {
				cout << 10;
			} else if (s2 == 'C' and s4 == 'B') {
				cout << 11;
			} else if (s2 == 'F' and s4 == 'D') {
				cout << 11;
			} else if (s2 == 'A' and s4 == 'D') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'A' and s4 == 'F') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'B' and s4 == 'D') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'B' and s4 == 'F') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'C' and s4 == 'D') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'C' and s4 == 'F') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'D' and s4 == 'A') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'D' and s4 == 'B') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'D' and s4 == 'C') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'F' and s4 == 'A') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'F' and s4 == 'B') {
				cout << 0;
				cout << 0;
			} else if (s2 == 'F' and s4 == 'C') {
				cout << 0;
				cout << 0;
			}
		} else {
			cout << 0;
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}

	return 0;
}
