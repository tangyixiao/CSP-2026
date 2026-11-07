#include <bits/stdc++.h>
using namespace std;

string r1, r2, x1, x2;

int main() {
	freopen( "travel.in", "r", stdin );
	freopen( "travel.out", "w", stdout );
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> r1 >> r2 >> x1 >> x2;
	if ( r1 == x1 ) {
		cout << "1";
		string s1 = "" + r2[0];
		s1 += r2[1];
		string s2 = "" + x2[0];
		s2 += x2[1];
		if ( s1 == s2 ) {
			cout << "1";
			if (( r2[2] >= 'A' && r2[2] <= 'C' && x2[2] >= 'A' && x2[2] <= 'C' ) || ( r2[2] >= 'D' && x2[2] >= 'D' ) ) {
				cout << "1";
				if (( r2[2] == 'A' && x2[2] == 'C' ) || ( r2[2] == 'C' && x2[2] == 'A' ) ) {
					cout << "0";
				} else {
					cout << "1";
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
