#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int xiang, xiang1, pai, pai1;
	char zuo, zuo1;
	cin >> xiang >> pai >> zuo;
	cin >> xiang1 >> pai1 >> zuo1;
	if (xiang == xiang1) {
		cout << "1";
		if (pai == pai1) {
			cout << "1";
			if (((zuo == 'A' || zuo == 'B' || zuo == 'C') && (zuo1 == 'A' || zuo1 == 'B' || zuo1 == 'C')) || ((zuo == 'D'
			        || zuo == 'F') && (zuo1 == 'D' || zuo1 == 'F'))) {
				cout << "1";
				if ((zuo == zuo1 + 1) || (zuo == zuo1 - 1)) {
					cout << "1";
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
	}
	return 0;
}
