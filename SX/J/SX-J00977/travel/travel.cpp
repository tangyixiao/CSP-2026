#include <bits/stdc++.h>
using namespace std;
long long c1, s1, c2, s2;
char q1, q2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> q1;
	cin >> c2 >> s2 >> q2;
	//cout << c1 << " " << s1 << " " << q1 << " " << c2 << " " << s2 << " " << q2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (s1 == s2) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (((q1 == 'A'  || q1 == 'B' || q1 == 'C') && (q2 == 'A'  || q2 == 'B' || q2 == 'C')) || ((q1 == 'D'  || q1 == 'F')
	        && (q2 == 'D'  || q2 == 'F'))) {

		cout << 1;
	} else {
		cout << 0 << 0;
		return 0;
	}
	if (char(int(q1) + 1) == q2 || char(int(q1) - 1) == q2) {
		cout << 1;
	} else {
		cout << 0;
	}

	return 0;
}
