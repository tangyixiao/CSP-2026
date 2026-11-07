#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a, b, d, e;
char c, f;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d >> e >> f;
	if (a == d) {
		cout << "1";
		if (b == e) {
			cout << "1";
			if ((c <= 'C') && (f <= 'C')) {
				cout << "1";
				if (abs(c - f) == 1) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				if ((c >= 'D') && (f >= 'D')) {
					cout << "11";
				} else {
					cout << "00";
				}
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
    return 0;
}