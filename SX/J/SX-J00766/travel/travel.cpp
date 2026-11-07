#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c, x; //³µÏá
	string s, y; //×ùÎ»
	int a, b, p, q; //ÅÅ
	int sx, yx;
	cin >> c >> s >> x >> y;
	sx = s[2] - 65;
	yx = y[2] - 65;
	if (c == x) {
		cout << 1;
	} else
		cout << "0000";
	a = s[0] - '0';
	a = a * 10;
	b = s[1] - '0';
	p = y[0] - '0';
	p = p * 10;
	q = y[1] - '0';
	if (c == x) {
		if (a + b == p + q) {
			cout << 1;

		} else {
			cout << "000";
			return 0;
		}

	}
	if (c == x) {
		if (a + b == p + q) {
			if ((sx >= 0 && sx <= 2 && yx >= 0 && yx <= 2) || (sx >= 3 && sx <= 5 && yx >= 3 && yx <= 5)) {
				cout << 1;
			} else
				cout << 0;
		}
	}
	if (c == x) {
		if (a + b == p + q) {
			if (sx >= 3 && sx <= 5 && yx >= 3 && yx <= 5) {
				cout << 1;
				return 0;
			}
			if (sx >= 0 && sx <= 2 && yx >= 0 && yx <= 2 && abs(yx - sx) == 1) {
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
	return 0;
}//©d(¨R¨Œ¨Q*)o