#include<bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4; //表示小R的车厢号座位号，小X的车厢号座位号
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3) {
		cout << "1";
		string t1, t2;
		t1 = s2[0] + s2[1];
		t2 = s4[0] + s4[1];
		if (t1 == t2) {
			cout << "1";
			char t3, t4;
			t3 = s2[2], t4 = s4[2];
			if ((t3 <= 'C' && t4 <= 'C') || t3 > 'C' && t4 > 'C') {
				cout << "1";
				if ((t3 == 'A' && t4 == 'B') || (t3 == 'B' && t4 == 'A') || (t3 == 'B' && t4 == 'C') || (t3 == 'C' && t4 == 'B') || (t3 == 'D' && t4 == 'F') || (t3 == 'F' && t4 == 'D')) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}