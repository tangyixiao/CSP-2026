#include <bits/stdc++.h>
using namespace std;
int a, c, e, f;
string b, d;
char g, h;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> a >> b >> c >> d;
	e = (b[0] - '0') * 10 + (b[1] - '0');
	g = b[2];
	f = (d[0] - '0') * 10 + (d[1] - '0');
	h = d[2];
	if (a != c) {
		cout << "0000";
	} else {
		cout << 1;
		if (e != f) {
			cout << "000";
		} else {
			cout << 1;
			bool fl = (g == 'A' || g == 'B' || g == 'C'), ffl = (h == 'A' || h == 'B' || h == 'C');
			if (fl != ffl) {
				cout << "00";
			} else {
				cout << 1;
				if (abs(g - h) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			}
		}
	}
	return 0;
}
