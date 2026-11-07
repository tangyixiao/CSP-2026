#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in ", "r", stdin);
	freopen("travel.out ", "w", stdout);
	char s1, s2, C, s3, A, s4, B;
	char c1, c2;
	s1 = s3 + A;
	s2 = s4 + B;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (s3 == s4) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (s3 == s4 && ((A <= C && B <= C) || (A >= C && B >= C))) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (A + 1 == s2 || A - 1 == s2) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
