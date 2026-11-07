#include <bits/stdc++.h>
using namespace std;
string s, c, sa, ca;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	long long l = 0;
	cin >> s >> sa >> c >> ca;
	for (int i = 0; i <= s.size(); i++) {
		if (s[i] != c[i]) {
			cout << "0000";
			l++;
			return 0;
		}
	}
	if (l == 0) {
		cout << "1";
	}
	long long p = sa.size();
	for (int i = 0; i < p - 1; i++) {
		l = 0;
		if (sa[i] != ca[i]) {
			cout << "000";
			return 0;
			l++;
		}
		if (l == 0 && i != 0) {
			cout << "1";
		}
	}
	for (int i = p - 1; i < p; i++) {
		if (sa[i] >= 'A' && sa[i] <= 'C') {
			if (ca[i] >= 'A' && ca[i] <= 'C') {
				cout << "1";
				if (ca[i] + 1 == sa[i] || sa[i] + 1 == ca[i]) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else if (sa[i] == 'D' || sa[i] == 'F') {
			if (sa[i] == 'D' && ca[i] == 'F') {
				cout << "11";
			} else if (sa[i] == 'F' && ca[i] == 'D') {
				cout << "11";
			}
		}
	}
	return 0;
}
