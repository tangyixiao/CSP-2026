#include <bits/stdc++.h>
using namespace std;

bool isb(string a, string b) {
	if (a == b)
		return 1;
	return 0;
}

bool isp(string a, string b) {
	if (a == b)
		return 1;
	else
		return 0;
}

bool isc(char a, char b) {
	char R, X;
	if (a >= 'A' && a <= 'C')
		R = 'l';
	else
		R = 'r';
	if (b >= 'A' && b <= 'C')
		X = 'l';
	else
		X = 'r';
	if (R == X)
		return 1;
	return 0;
}

bool isn(char a, char b) {
	if ((a != 'C' && b != 'D' ) || (a != 'D' && a != 'C')) {
		if (char(a + 1) == b || char(a - 1) == b)
			return 1;
	}
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string lr = "", lx = "";
	for (int i = 0; i <= 1; i++) {
		lr += s1[i];
		lx += s2[i];
	}
	char nr = s1[2], nx = s2[2];
	if (isb(c1, c2) == 1) {
		cout << 1;
		if (isp(lr, lx) == 1) {
			cout << 1;
			if (isc(nr, nx) == 1) {
				cout << 1;
				if (isn(nr, nx) == 1)
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";



	return 0;
}
