#include <bits/stdc++.h>
using namespace std;
#define N 1010
#define endl '\n'
#define int long long

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2;
	char s11, s12, s13, s21, s22, s23;
	cin >> c1 ;
	cin >> s11 >> s12 >> s13 >> c2 >> s21 >> s22 >> s23;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
	}
	if (s11 == s21 && s12 == s22) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if ((s13 >= 'D' && s23 >= 'D') || (s13 <= 'C' && s23 <= 'C')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if (s13 >= 'D' && s23 >= 'D') {
		cout << 1;
	} else {
		if (s13 == 'C' && s23 == 'B')
			cout << 1;
		if (s13 == 'A' && s23 == 'B')
			cout << 1;
		if (s13 == 'B' && s23 == 'A')
			cout << 1;
		if (s13 == 'B' && s23 == 'C')
			cout << 1;
	}
	return 0;
}