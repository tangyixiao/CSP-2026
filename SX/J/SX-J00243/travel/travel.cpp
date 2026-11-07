#include <bits/stdc++.h>
using namespace std;
string s, st, c, ct;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s >> st >> c >> ct;
	string a = st.substr(0, 2);
	string b =  ct.substr(0, 2);
	char q = st[2];
	char w = ct[2];
	if (s == c) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (a == b) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	bool e = 0;
	if (q == 'A' || q == 'B' || q == 'C') {
		if (w == 'A' || w == 'B' || w == 'C') {
			cout << 1;
			e = 1;
		}
	} else {
		if (q == 'D' || q == 'F') {
			if (w == 'D' || w == 'F') {
				cout << 1;
				e = 1;
			}
		}
	}
	if (e == 0) {
		cout << "00";
		return 0;
	}
	if (abs(q - w) == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}