#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string t1, t2;
	string s1, s2;
	cin >> t1 >> s1 >> t2 >> s2;
	if (t1 != t2) {
		cout << "0000";
		return 0;
	}
	cout << "1";



	int l = 10 * (s1[0] - '0') + (s1[1] - '0');
	int s = 10 * (s2[0] - '0') + (s2[1] - '0');
	if (l != s) {
		cout << "000";
		return 0;
	}
	cout << "1";


	char k1 = s1[2];
	char k2 = s2[2];
	int flag = 0;

	if (k1 <= 'C') {
		flag++;
	}
	if (k2 <= 'C') {
		flag++;
	}

	if (flag != 2 && flag != 0) {
		cout << "00";
		return 0;
	}
	cout << "1";



	if (abs(k1 - k2) == 1 || (k1 == 'D' && k2 == 'F') || (k1 == 'F' && k2 == 'D')) {
		cout << "1";
	} else {
		cout << "0";
		return 0;
	}


	return 0;
}
