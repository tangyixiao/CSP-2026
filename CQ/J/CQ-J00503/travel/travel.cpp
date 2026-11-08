#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << '1';
		string t1 = "", t2 = "";
		t1 += s1[0], t1 += s1[1];
		t2 += s2[0], t2 += s2[1];
		if (t1 == t2) {
			cout << '1';
			char p1 = s1[2], p2 = s2[2];
			if (p1 == 'A' || p1 == 'B' || p1 == 'C') {
				if (p2 == 'A' || p2 == 'B' || p2 == 'C') {
					cout << '1';
					int tmp = abs(p1 - p2);
					if (tmp == 1) cout << '1';
					else cout << '0';
				} else cout << "00";
			} else {
				if (p2 == 'D' || p2 == 'E') cout << "11";
				else cout << "00";
			}
		} else cout << "000";
	}
	else cout << "0000";
	
	return 0;
}
