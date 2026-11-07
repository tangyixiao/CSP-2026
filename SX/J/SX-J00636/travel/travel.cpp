#include <bits/stdc++.h>
using namespace std;
string c1, c2, c3, c4;
int a[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 != c3) {
		cout << "0000" << endl;
		return 0;
	} else if (c2[0] != c4[0] || c2[1] != c4[1]) {
		cout << "1000" << endl;
		return 0;
	} else if ((c2[2] <= '67' && c4[2] > 67) || (c4[2] <= '67' && c2[2] > 67)) {
		cout << "1100" << endl;
		return 0;
	} else if (c2[2] != c4[2] + 1 && c2[2] != c4[2] - 1) {
		cout << "1110" << endl;
		return 0;
	} else {
		cout << "1111" << endl;
		return 0;
	}
	return 0;
}
