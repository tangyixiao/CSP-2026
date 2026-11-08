#include <bits/stdc++.h>
using namespace std;
string s1,z1,s2,z2;
bool f = false;
int main() {
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	cin >> s1 >> z1 >> s2 >> z2;
	if (s1 == s2) {
		cout << 1;
	} else {
		cout << 0;
		f = true;
	}
	if (!f and (z1[0] == z2[0] and z1[1] == z2[1])) {
		cout << 1;
	} else {
		cout << 0;
		f = true;
	}
	if (!f and ((z1[2] == 'A' and z2[2] == 'B') or (z1[2] == 'A' and z2[2] == 'C') or (z1[2] == 'B' and z2[2] == 'C') or (z1[2] == 'B' and z2[2] == 'A') or (z1[2] == 'C' and z2[2] == 'B') or (z1[2] == 'C' and z2[2] == 'A') or (z1[2] == 'D' and z2[2] == 'F') or (z1[2] == 'F' and z2[2] == 'D'))) {
		cout << 1;
	} else {
		cout << 0;
		f = true;
	}
	if (!f and ((z1[2] == 'A' and z2[2] == 'B') or (z1[2] == 'B' and z2[2] == 'C') or (z1[2] == 'B' and z2[2] == 'A') or (z1[2] == 'C' and z2[2] == 'B'))) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
