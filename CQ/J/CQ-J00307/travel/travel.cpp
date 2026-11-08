#include <bits/stdc++.h>
using namespace std;
using ll = long long;

namespace code {
	string a1, b1, a2, b2;
	
	void niam() {
		cin >> a1 >> b1 >> a2 >> b2;
		if(a1 == a2) {
			cout << "1";
			if(b1.substr(0, 2) == b2.substr(0, 2)) {
				cout << "1";
				if((('A' <= b1[2] && b1[2] <= 'C') && ('A' <= b2[2] && b2[2] <= 'C')) || (b1[2] == 'D' && b2[2] == 'F') || (b1[2] == 'F' && b2[2] == 'D')) {
					cout << "1";
					if(abs((int)(b1[2] - b2[2])) == 1 || (b1[2] == 'D' && b2[2] == 'F') || (b1[2] == 'F' && b2[2] == 'D')) {
						cout << "1";
					}
					else
						cout << "0";
				}
				else
					cout << "00";
			}
			else
				cout << "000";
		}
		else {
			cout << "0000";
		}
	}
}

int main() {
#ifndef _NO_FREOPEN_
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	code::niam();
	
	return 0;
}

/*
10min
*/
