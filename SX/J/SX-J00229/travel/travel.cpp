#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, aa, bb;
	char ac, bc;
	cin >> a >> aa >> ac >> b >> bb >> bc;
	if (a == b) {
		cout << "1";
		if (aa == bb) {
			cout << "1";
			if ((ac == 'A' || ac == 'B' || ac == 'C') && (bc == 'A' || bc == 'B' || bc == 'C')) {
				cout << "1";
				if (ac == 'A' && bc == 'B')
					cout << "1";
				else if (ac == 'B' && bc == 'C')
					cout << "1";
				else if (ac == 'B' && bc == 'A')
					cout << "1";
				else if (ac == 'C' && bc == 'B')
					cout << "1";
				else
					cout << "0";
			} else if ((ac == 'D' || ac == 'F') && (bc == 'D' || bc == 'F')) {
				cout << "11";
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
