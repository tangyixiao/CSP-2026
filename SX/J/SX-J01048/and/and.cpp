#include <bits/stdc++.h>
using namespace std;
long long n, m, biggg = -1e9, bl[300000];

const long long bldw[40] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648};
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> bl[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			biggg = max(bl[i], biggg);
		}
		cout << biggg;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				biggg = max((bl[i] & bl[j]), biggg);
			}
		}
		cout << biggg;
		return 0;
	}
	if (m == n) {
		biggg = bl[1];
		for (int i = 2; i <= n; i++) {
			biggg = (biggg &bl[i]);
		}
		cout << biggg;
		return 0;
	} else {

		for (int i = 1; i <= n; i++) {

			if ((bl[i] + 1) % 2 == 0) {
				for (int j = 0; j < 32; j++) {
					if ((bldw[j] - 1) == bl[i]) {
						biggg = max(biggg, bl[i]);
					}
				}

			}

		}
		cout << biggg << endl;
	}
	return 0;
}
