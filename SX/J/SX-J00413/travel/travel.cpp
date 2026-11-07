#include <bits/stdc++.h>
using namespace std;
string r1, r2, x1, x2;

bool t(int x, int y) {
	int a = 'A' + '0';
	int c = 'C' + '0';
	int f = 'F' + '0';
	if (max(x, y) - min(x, y) >= 3)
		return false;
	else if (x >= a && x <= c) {
		if (y >= a && y <= c)
			return false;
		else
			return true;
	} else if (x > c && x <= f) {
		if (y > c && y <= f)
			return false;
		else
			return true;
	}
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r1 >> r2 >> x1 >> x2;
	for (int i = 1; i <= 5; i++) {
		r1 += '0';
		r2 += '0';
		x1 += '0';
		x2 += '0';
	}
	if (r1 != x1) {
		cout << "0000";
		return 0;
	}
	if (r2[0] != x2[0] || r2[1] != x2[1]) {
		cout << "1000";
		return 0;
	}
	if (!t(r2[2], x2[2])) {
		cout << "1100";
		return 0;
	}
	if (r2[2] - 1 != x2[2] && x2[2] - 1 != r2[2]) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}