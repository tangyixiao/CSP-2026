#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
char e, f;
bool check (char ch) {
	if (ch == 'A' || ch == 'B' || ch == 'C') {
		return 0;
	}
	return 1;
}
int main () {
//	freopen("down/travel/travel5.in", "r", stdin);
//	freopen("down/travel/travel5.out", "w", stdout);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> a >> b >> e >> c >> d >> f;
	if (a != c) {
		cout << "0000\n";
		return 0;
	}
	cout << '1';
	if (b != d) {
		cout << "000\n";
		return 0;
	}
	cout << '1';
	if (check(e) ^ check(f)) {
		cout << "00\n";
		return 0;
	}
	cout << '1';
	if (abs(e - f) == 1 || (e == 'D' && f == 'F') || (e == 'F' && f == 'D')) {
		cout << "1\n";
		return 0;
	}
	cout << "0\n";
	return 0;
}