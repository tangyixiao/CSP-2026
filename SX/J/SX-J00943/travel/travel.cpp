#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	char xc, xz, zc, zz;
	cin >> xc >> xz >> zc >> zz;

	if (xc == zc) {
		a1 = 1;
	}


	if (xz / 100 == zz / 100 && a1 == 1) {
		a2 = 1;
	}



	if (int(char(xz % 100)) == 68 || int(char(xz % 100)) == 70  && a2 == 1) {



		if (int((char)zz % 100) == 68 || int((char)zz % 100) == 70) {
			a3 = 1;
			a4 = 1;
		} else {
			a3 = 1;
			a4 = 0;
		}
	} else {
		if (a2 == 1) {
			if (int((char)zz % 100) == 68 || int((char)zz % 100) == 70) {
				a3 = 1;
				a4 = 0;
			} else {
				if (int((char)xz % 100) == 65 && int((char)zz % 100) == 67 || int((char)zz % 100) == 65 && int((char)xz % 100) == 67) {
					a3 = 1;
					a4 = 0;

				} else {
					a3 = 1;
					a4 = 1;
				}
			}
		}

	}



	cout << a1 << a2 << a3 << a4;








	return 0;
}
