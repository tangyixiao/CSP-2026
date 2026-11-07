#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1, s3;
char s2, s4, q, w, e, r;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> q >> w >> s2 >> s3 >> e >> r >> s4;
	if (s1 == s3)
		cout << 1;
	else {

		cout << "0000";
		return 0;

	}
	if (q == e && w == r) {
		cout << 1;
		int a1 = s2;
		int a2 = s4;
		if ((a1 <= 67 && a2 <= 6) || (a1 > 67 && a1 <= 69 && a2 > 67 && a2 <= 69) ) {
			cout << 1;
			if (abs(a1 - a2) == 1)
				cout << 1;
			else
				cout << 0;
		} else {
			cout << "00";
		}
	} else {
		cout << "000";
		return 0;
	}
	return 0;
}