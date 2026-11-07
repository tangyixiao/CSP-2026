#include <bits/stdc++.h>
using namespace std;

int a[5];
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a[1] >> s1 >> a[2] >> s2;
	int t1 = 0, t2 = 0;
	t1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	t2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (a[1] != 1 && a[1] != 16 && a[2] != 1 && a[2] != 16) {
		if (a[1] == a[2]) {
			cout << 1;
			if (t1 == t2) {
				cout << 1;
				if (s1[2] <= 'C' && s2[2] <= 'C') {
					cout << 1;
					if (abs(s1[2] - s2[2]) == 1) {
						cout << 1;
					} else
						cout << "0";
				} else if (s1[2] >= 'D' && s2[2] >= 'D')
					cout << "11";
				else
					cout << "00";
			} else
				cout << "000";
		} else
			cout << "0000";
	} else
		cout << "0000";
	return 0;
}
