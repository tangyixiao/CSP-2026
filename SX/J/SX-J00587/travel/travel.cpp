#include <bits/stdc++.h>
using namespace std;
int a, b;
string az, bz, k, x, k2, x2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> az >> b >> bz;
	if (a == b) {
		cout << 1;
	} else {
		cout << 0;
	}
	for (int i = 0; i <= 3; i++) {
		if (az[i] <= '9' and az[i] >= '0' ) {
			k[az[i]++];
		} else {
			x[az[i]++];
		}
	}

	for (int i = 0; i <= 3; i++) {
		if (bz[i] <= '9' and bz[i] >= '0' ) {
			k2[bz[i]++];
		} else {
			x2[bz[i]++];
		}
	}

	return 0;
}
