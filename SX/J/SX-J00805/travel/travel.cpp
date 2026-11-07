
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1, c2, s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	bool flag = false;
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1 == s1) {
		cout << 1;
		flag = true;
	} else
		cout << 0;
	if (c2.substr(0, 2) == s2.substr(0, 2) && flag) {
		cout << 1;
	} else {
		cout << 0;
		flag = false;
	}

	if ((((c2[2] == 'A' || c2[2] == 'B' || c2[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'))
	        || ((c2[2] == 'D' || c2[2] == 'E') && (s2[2] == 'D' || s2[2] == 'E'))) && flag) {
		cout << 1;
	} else {
		cout << 0;
		flag = false;
	}
	if (abs(c2[2] - s2[2]) == 1 && ((c2[2] != 'D' && s2[2] != 'C') && (c2[2] != 'C' && s2[2] != 'D')) && flag) {
		cout << 1;
	} else
		cout << 0;
	return 0;
}
