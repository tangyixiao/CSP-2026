#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string _c1, _s1, _c2, _s2;
	cin >> _c1 >> _s1 >> _c2 >> _s2;

	if (_c1 == _c2) {
		cout << 1;
		if (_s1[0] == _s2[0] && _s1[1] == _s2[1]) {
			cout << 1;
			if (_s1[2] == 'A' || _s1[2] == 'B' || _s1[2] == 'C') {
				if (_s2[2] == 'A' || _s2[2] == 'B' || _s2[2] == 'C') {
					cout << 1;
					if (_s1[2] == 'A') {
						if (_s2[2] == 'B')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'B') {
						if (_s2[2] == 'C' || _s2[2] == 'A')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'C') {
						if (_s2[2] == 'B')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'D') {
						if (_s2[2] == 'F')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'F') {
						if (_s2[2] == 'D')
							cout << 1;
						else
							cout << 0;
					}
				} else
					cout << 0 << 0;
			}
			if (_s1[2] == 'D' || _s1[2] == 'F') {
				if (_s2[2] == 'D' || _s2[2] == 'F') {
					cout << 1;
					if (_s1[2] == 'A') {
						if (_s2[2] == 'B')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'B') {
						if (_s2[2] == 'C' || _s2[2] == 'A')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'C') {
						if (_s2[2] == 'B')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'D') {
						if (_s2[2] == 'F')
							cout << 1;
						else
							cout << 0;
					}
					if (_s1[2] == 'F') {
						if (_s2[2] == 'D')
							cout << 1;
						else
							cout << 0;
					}
				} else
					cout << 0 << 0;
			}
		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;
	return 0;
}
