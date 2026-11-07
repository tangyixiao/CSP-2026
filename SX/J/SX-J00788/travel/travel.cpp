#include <bits/stdc++.h>
using namespace std;
int a, b;
string s1, s2, t1, t2;
char t3, t4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s1 >> b >> s2;
	if (a == b) {
		cout << 1;
		t1 = s1[0] + s1[1];
		t2 = s2[0] + s2[1];
		if (t1 == t2) {
			cout << 1;
			t3 = s1[2];
			t4 = s2[2];
			if ((t3 <= 'C' && t4 <= 'C') || (t3 >= 'D' && t4 >= 'D')) {
				cout << 1;
				if (t3 - t4 == 1 || t4 - t3 == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}