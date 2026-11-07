#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	long long len = 0, flg = 0;
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	len = c1.size();
	for (int i = 0; i < len; i++) {
		if (c1[i] != c2[i]) {
			cout << "0000";
			return 0;
		}
	}
	cout << "1";
	len = s1.size();
	for (int i = 0; i < len - 1; i++) {
		if (s1[i] != s2[i]) {
			cout << "000";
			return 0;
		}
	}
	cout << "1";
	if (s1[2] >= 'D' && s2[2] >= 'D') {
		cout << "11";
	} else if (s1[2] <= 'C' && s2[2] <= 'C') {
		cout << "1";
		if (abs(s1[2] - s2[2]) == 1) {
			cout << "1";
		} else {
			cout << "0";
		}
	} else {
		cout << "00";
	}
	return 0;
}