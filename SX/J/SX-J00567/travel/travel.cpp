#include <bits/stdc++.h>
using namespace std;

int num(char c) {
	return c - 'A';
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		string t1 = s1, t2 = s2;
		t1.erase(2, 1);
		t2.erase(2, 1);
		if (t1 == t2) {
			int tt1 = num(s1[2]), tt2 = num(s2[2]);
			if (( tt1 <= 2 && tt2 <= 2 ) || ( tt1 > 2 && tt2 > 2 ) ) {
				if (abs(tt1 - tt2) == 1) {
					cout << "1111";
				} else {
					cout << "1110";
				}
			} else {
				cout << "1100";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}