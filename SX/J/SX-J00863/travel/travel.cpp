#include <bits/stdc++.h>
using namespace std;

int pai(string a) {
	int s = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			s = s * 10 + (a[i] - '0');
		} else {
			return s;
		}
	}
}

char lie(string a) {
	char s = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 'A' && a[i] <= 'F') {
			s = a[i];
			return s;
		}
	}
}
int c1, c3;
string c2, c4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	cin >> c2;
	cin >> c3;
	cin >> c4;
	if (c1 != c3) {
		cout << "0000";
	} else {
		cout << 1;
		if (pai(c2) != pai(c4)) {
			cout << "000";
		} else {
			cout << 1;
			if ((lie(c2) <= 'C' && lie(c4) >= 'D') || (lie(c4) <= 'C' && lie(c2) >= 'D')) {
				cout << "00";
			} else {
				cout << 1;
				if (abs((lie(c2) - '0') - (lie(c4) - '0')) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			}
		}
	}
	return 0;
}