#include <bits/stdc++.h>
using namespace std;
int a, b, x, y;
char ax, bx;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> x >> ax >> b >> y >> bx;
	if (a == b) {
		cout << 1;
		if (x == y) {
			cout << 1;
			if ((ax == 'D' && bx == 'F' ) || (ax == 'F' && bx == 'D') || (ax == 'A' && bx == 'B') || (ax == 'B' && bx == 'A')
			        || (ax == 'B'
			            && bx == 'C') || (ax == 'C' && bx == 'B' ) || ( ax == 'C' && bx == 'A' ) || ( ax == 'A' && bx == 'C')) {
				cout << 1;
				if ((ax == 'D' && bx == 'F' ) || (ax == 'F' && bx == 'D') || (ax == 'A' && bx == 'B') || (ax == 'B' && bx == 'A')
				        || (ax == 'B'
				            && bx == 'C') || (ax == 'C' && bx == 'B' )) {
					cout << 1;
				} else
					cout << 0;
			} else
				cout << 0 << 0;

		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;
	return 0;
}