#include <bits/stdc++.h>
using namespace std;

bool flag (char a, char b) {
	if (a == 'A' && (b == 'B' || b == 'C')) {
		return true;
	} else if (a == 'B' && (b == 'A' || b == 'C')) {
		return true;
	} else if (a == 'C' && (b == 'A' || b == 'B')) {
		return true;
	}
	return false;
}

bool flag2 (char a, char b) {
	if (a != 'F' && b != 'F') {
		if (abs((a - '0') - (b - '0')) == 1)
			return true;
	} else {
		if (a == 'D' || b == 'D')
			return true;
	}
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else
		cout << 0;
	string p1, p2;
	for (int i = 0; i <= 1; i ++) {
		p1 += s1[i];
		p2 += s2[i];
	}
	if (p1 == p2 && c1 == c2)
		cout << 1;
	else
		cout << 0;
	char f1 = s1[2], f2 = s2[2];
	if (p1 == p2 && c1 == c2 && flag(f1, f2))
		cout << 1;
	else
		cout << 0;
	if (p1 == p2 && c1 == c2 && flag(f1, f2) && flag2(f1, f2))
		cout << 1;
	else
		cout << 0;
	return 0;
}