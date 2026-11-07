#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int cx1, cx2;
	string zw1, zw2;
	cin >> cx1 >> zw1 >> cx2 >> zw2;
	if (cx1 != cx2) {
		cout << "0000";
		return 0;
	}else {
		cout << 1;
	}
	string s = "ABCDF";
	int p1 = (zw1[0] - '0') * 10 + (zw1[1] - '0') , p2 = (zw2[0] - '0') * 10 + (zw2[1] - '0');
	char z1 = zw1[2], z2 = zw2[2];
	bool b1 = 0, b2 = 0;
	if (p1 == p2) {
		cout << 1;
		b1 = 1;
	}else {
		cout << 0;
	}
	if (b1 == 1 && ((z1 >= 'A' && z1 <= 'C' && z2 >= 'A' && z2 <= 'C') || (z1 >= 'D' && z1 <= 'F' && z2 >= 'D' && z2 <= 'F'))) {
		cout << 1;
		b2 = 1;
	}else {
		cout << 0;
	}
	int x = 0;
	if (b2 == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < 5; i++) {
		if (s[i] == z1) {
			x = i;
			if (x == 0) {
				if (s[x + 1] == z2) {
					cout << 1;
					break;
				}else {
					cout << 0;
					break;
				}
			}else if (x == 4) {
				if (s[x - 1] == z2) {
					cout << 1;
					break;
				}else {
					cout << 0;
					break;
				}
			}else {
				if (s[x - 1] == z2 || s[x + 1] == z2) {
					cout << 1;
					break;
				}else {
					cout << 0;
					break;
				}
			}
		}
	}
	return 0;
}
