#include <bits/stdc++.h>
using namespace std;
//两张二等座车票，车票上写着各自的车厢号和座位号
string c1, s1, c2, s2;
int cc = 0;
int f = 2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		for (int i = 0; i <= 1; i++) {
			if (s1[i] != s2[i]) {
				cout << "000";
				cc = 1;
				return 0;
			}
		}
		if (cc == 0) {
			cout << 1;
		}//是否位于过道同一侧
		if (s1[f] == 'D' and s2[f] == 'F') {
			cout << "11";
			return 0;
		}
		if (s1[2] == 'F' and s2[2] == 'D') {
			cout << "11";
			return 0;
		}
		if (s1[2] == 'A' and s2[2] == 'B') {
			cout << "11";
			return 0;
		}
		if (s1[2] == 'B' and s2[2] == 'A') {
			cout << "11";
			return 0;
		}
		//
		if (s1[2] == 'B' and s2[2] == 'C') {
			cout << "11";
			return 0;
		}
		if (s1[2] == 'C' and s2[2] == 'B') {
			cout << "11";
			return 0;
		}
		//
		if (s1[2] == 'A' and s2[2] == 'C') {
			cout << "10";
			return 0;
		}
		if (s1[2] == 'C' and s2[2] == 'A') {
			cout << "10";
			return 0;
		}
		cout << "00";
	} else {
		cout << "000";
		cout << 0;
	}
	return 0;
}