#include <bits/stdc++.h>
using namespace std;
int k, b, cnt, cne, cnb, cnd;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s, n;
	cin >> k >> s >> b >> n;
	for (int i = 1; i <= 3; i++) {
		if (s[i] <= '9' && s[i] >= '0') {
			cnt += cnt * 10 + (s[i] - '0');
		} else if (s[i] == 'A')
			cne = 1;
		else if (s[i] == 'B')
			cne = 2;
		else if (s[i] == 'C')
			cne = 3;
		else if (s[i] == 'D')
			cne = 10;
		else if (s[i] == 'E')
			cne = 11;
	}
	for (int i = 1; i <= 3; i++) {
		if (n[i] <= '9' && n[i] >= '0') {
			cnb += cnb * 10 + (n[i] - '0');
		} else if (n[i] == 'A')
			cnd = 1;
		else if (n[i] == 'B')
			cnd = 2;
		else if (n[i] == 'C')
			cnd = 3;
		else if (n[i] == 'D')
			cnd = 10;
		else if (n[i] == 'E')
			cnd = 11;
	}
	if (k != b) {
		cout << "0000";
		return 0;
	} else if (k == b) {
		cout << "1";
		if (cnt == cnb) {
			cout << "1";
			if (cne - cnd <= 2 && cne - cnd >= -2) {
				cout << "1";
				if (cnd - cne == 1 || cnd - cne == -1) {
					cout << "1";
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	}
	return 0;
}