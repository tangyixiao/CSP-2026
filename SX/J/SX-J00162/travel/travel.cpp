#include <bits/stdc++.h>
using namespace std;
int tnum1, tnum2, a[4];
string snum1, snum2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> tnum1 >> snum1 >> tnum2 >> snum2;
	if (tnum1 == tnum2) {
		a[0]++;
		if (snum1[0] == snum2[0] && snum1[1] == snum2[1]) {
			a[1]++;
			if (snum1[2] == 'A' || snum1[2] == 'B' || snum1[2] == 'C') {
				if (snum2[2] == 'A' || snum2[2] == 'B' || snum2[2] == 'C') {
					a[2]++;
					if (snum1[2] == snum2[2] + 1 || snum2[2] == snum1[2] + 1) {
						a[3]++;
					}
				}
			} else {
				if (snum2[2] == 'D' || snum2[2] == 'F') {
					a[2]++;
					if (snum1[2] == snum2[2] + 1 || snum2[2] == snum1[2] + 1) {
						a[3]++;
					}
				}
			}
		}
	}
	for (int i = 0; i < 4; i++)
		cout << a[i];
	return 0;
}
