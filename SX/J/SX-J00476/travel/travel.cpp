#include <bits/stdc++.h >
using namespace std;
string c1, s1, c2, s2;
bool g1, g2;
bool d1, d2, d3, d4;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (s1 == s2) {
		cout << "0000";
		return 0;
	}
	g1 = false;
	g2 = false;
	d1 = false;
	d2 = false;
	d3 = false;
	d4 = false;
	if (c1[0] == '1' && c1[1] - '0' < 9) {
		g1 = true;
	}
	if (c2[0] == '1' && c2[1] - '0' < 9) {
		g2 = true;
	}
	if (c1[0] - '0' > 0) {
		g1 = true;
	}
	if (c2[0] - '0' > 0) {
		g2 == true;
	}
	if (g1 == g2) {
		cout << 1;
		d1 = true;
	} else {
		cout << 0;
		d1 = false;
	}

	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && d1 == true) {
		cout << 1;
		d2 = true;
	} else {
		cout << 0;
		d2 = false;
	}

	if (d2 == true && (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) {
		cout << 1;
		d3 = true;
	} else if (d2 == true && (s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) {
		cout << 1;
		d3 = true;
	}
	if (d3 == false) {
		cout << 0;
	}

	if (d2 == true && (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) {
		long long q = abs(s1[2] - s2[2]);
		if (c1 == c2 && q == 1) {
			cout << 1;
			d4 = true;
		}
	} else if (d2 == true && (s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) {
		cout << 1;
		d4 = true;
	}
	if (d4 == false) {
		cout << 0;
	}
}
