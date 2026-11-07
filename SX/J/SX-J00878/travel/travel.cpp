#include <bits/stdc++.h>
using namespace std;
string c, s, c1, s1;
int f, f1, zw, zw1;

char a[13] = {'A', 'B', 'C'}, b[12] = {'D', 'F'};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> c1 >> s1;
	zw = int(s[2]);
	zw1 = int(s1[2]);
	//cout << a[0] << a[1] << a[2];
	if (c != c1) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	if (s[0] == s1[0] && s[1] == s1[1]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	for (int i = 0; i <= 2; i++) {
		if (a[i] == s[2])
			f++;
		if (a[i] == s1[2])
			f++;
		if (b[i] == s[2])
			f1++;
		if (b[i] == s1[2])
			f1++;
	}
	if (f == 2 || f1 == 2) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if (zw == 70)
		zw--;
	if (zw1 == 70)
		zw1--;
	if (zw + 1 == zw1 || zw1 + 1 == zw)
		cout << 1;
	else
		cout << 0;
	return 0;
}
