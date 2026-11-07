#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

const int N = 1 + 10;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int a = s2[2], b = s4[2];
	if (a > b) {
		swap(a, b);
	}
//	cout << a << " " << b << endl;
	if (s1 == s3) {
		cout << "1";
		if (s2[0] == s4[0] && s2[1] == s4[1]) {
			cout << "1";
			if (b - a == 1 && a != 67 || a == 65 && b == 67) {
				cout << "1";
				if (b - a == 1) {
					cout << "1" << endl;
				} else {
					cout << "0" << endl;
				}
			} else {
				cout << "00" << endl;
			}
		} else {
			cout << "000" << endl;
		}
	} else {
		cout << "0000" << endl;
	}

	return 0;
}
