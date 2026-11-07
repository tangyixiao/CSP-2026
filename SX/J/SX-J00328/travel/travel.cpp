#include <bits/stdc++.h>
using namespace std;
string cc, ss, ccc, sss;
long long sum, cnt, nn;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cc >> ss >> ccc >> sss;
	if (ss[2] == 'A' || ss[2] == 'B' || ss[2] == 'C') {
		sum = 1;
	}
	if (sss[2] == 'A' || sss[2] == 'B' || sss[2] == 'C') {
		cnt = 1;
	}
	if (ss[2] == 'D' && sss[2] == 'F') {
		nn = 1;
	}
	if (ss[2] == 'F' && sss[2] == 'D') {
		nn = 1;
	}
	if (cc[0] - '0' == ccc[0] - '0' && cc[1] - '0' == ccc[1] - '0') {
		cout << 1;
	} else {
		cout << 0;
	}
	if (ss[0] - '0' == sss[0] - '0' && ss[1] - '0' == sss[1] - '0' && (ss[2] - '0') != (sss[2] - '0')) {
		cout << 1;
		if (ss[0] - '0' == sss[0] - '0' && ss[1] - '0' == sss[1] - '0' && cc[0] - '0' == ccc[0] - '0'
		        && cc[1] - '0' == ccc[1] - '0' && sum == cnt) {
			cout << 1;
			if (nn == 1) {
				cout << 1;
				return 0;
			} else {
				if (abs((ss[2] - '0') - (sss[2] - '0')) == 1) {
					cout << 1;
					return 0;
				} else {
					cout << 0;
					return 0;
				}
			}

		} else {
			cout << 0 << 0;
			return 0;
		}
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	return 0;
}