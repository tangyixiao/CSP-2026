#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r".stdin);
	freopen("travel.out", "w".stdout);
	string s1, s2, s3, s4;
	long long flag1 = 0, flag2 = 0;
	cin >> s1 >> s2 >> s3 >> s4;
	for (int i = 1; i <= s1.size(); i++) {
		if (s1[i] == s3[i]) {
			flag1++;
		}
	}
	if (flag1 == 2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	for (int i = 1; i <= s2.size() - 1; i++) {
		if (s2[i] == s4[i]) {
			flag2++;
		}
	}
	if (flag2 == 2) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	int s = 'A', x = 'C', y = 'D', z = 'F';
	if (( s2[3] >= s &&  s2[3] <= x &&  s4[3] >= s &&  s4[3] <= x) || ( s2[3] == y &&  s4[3] == z)
	        || ( s2[3] == z &&  s4[3] == y)) {

		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (s2[3] == 'A' && s4[3] == 'B' || s2[3] == 'B' && s4[3] == 'C' || s2[3] == 'D' && s4[3] == 'F' || s2[3] == 'B'
	        && s4[3] == 'A' || s2[3] == 'C' && s4[3] == 'B' || s2[3] == 'F' && s4[3] == 'D') {

		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
