#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a, b, c, d, e;
char h = '1', j = '0';

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		e += h;
		if (b[0] == d[0] && b[1] == d[1]) {
			e += h;
		} else {

			e += j;
			e += j;
			e += j;
			cout << e;
			return 0;
		}
		if ((b[2] == 'A' || b[2] == 'B' || b[2] == 'C' ) && (d[2] == 'A' || d[2] == 'B' || d[2] == 'C')) {
			e += h;
			if (b[2] == 'A' && d[2] == 'B') {
				e += h;
			} else if (b[2] == 'B' && (d[2] == 'A' || b[2] == 'C')) {
				e += h;
			} else if (b[2] == 'C' && d[2] == 'B') {
				e += h;
			} else {
				e += j;
			}

		} else if ((b[2] == 'D'  || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')) {
			e += h;
			e += h;
		} else {
			e += j;
			e += j;
		}
		cout << e;
	} else if (a != c) {
		e += j;
		e += j;
		e += j;
		e += j;
		cout << e;
	}
}
