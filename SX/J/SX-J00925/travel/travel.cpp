#include <bits/stdc++.h>
using namespace std;
string c1, c2;
char l1[2], l2[2], h1, h2;
int a, b, c, d, t;
bool s, s2, f, f1, f2, f3, f4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	for (int i = 0; i < 2; i++) {
		cin >> l1[i];
	}
	cin >> h1;
	cin >> c2;
	for (int i = 0; i < 2; i++) {
		cin >> l2[i];
	}
	cin >> h2;
	if (0 <= (h2 - 'A') && (h2 - 'A') <= 2) {
		s2 = 1;
	}

	if (0 <= (h1 - 'A') && (h1 - 'A') <= 2) {
		s = 1;
	}
	if (c1 == c2) {
		f1 = 1; //1
	}
	f = 1;
	for (int i = 0; i < 2; i++) {
		if (l1[i] != l2[i]) {
			f = 0;
		}
	}
	if (f && f1) {
		f2 = 1;
	}
	if (s == s2 && f2 == 1) { //3
		f3 = 1;
	}
	if (abs(h1 - h2) == 1 && f3) { //4
		f4 = 1;
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}
