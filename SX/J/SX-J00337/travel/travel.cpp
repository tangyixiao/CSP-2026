#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}

	int k1, k2, cx = 10;
	for (int i = 0; i < 2; i++) {
		k1 = int(s1[i]) * cx;
		k2 = int(s2[i]) * cx;
		cx = cx / 10;
	}
	if (k1 == k2)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}

	if (s1[2] > 'C') {
		if (s2[2] > 'C')
			cout << 1;
		else {
			cout << "00";
			return 0;
		}

	} else {
		if (s2[2] > 'C') {
			cout << "00";
			return 0;
		} else
			cout << 1;
	}
	if (s1[2] + 1 == s2[2]  || s1[2] - 1 == s2[2])
		cout << 1;
	else
		cout << 0;
	return 0;
}