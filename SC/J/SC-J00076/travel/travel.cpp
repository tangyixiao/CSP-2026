#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int a, b;
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s1 >> b >> s2;
	if (a != b) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
		if (s1[0] == s2[0] and s1[1] == s2[1]) {
			cout << 1;
		} else {
			cout << "000";
			return 0;
		}
		if ((s1[2] <= 'C' and s2[2] <= 'C') || (s1[2] > 'C' and s2[2] > 'C')) {
			cout << 1;
		} else {
			cout << "00";
			return 0;
		}
		if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
			cout << 1;
		} else {
			cout << 0;
		}
	}
	return 0;
}