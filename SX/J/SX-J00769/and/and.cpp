#include <bits/stdc++.h>
using namespace std;
int a[200100];

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	int n, m, maxs = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (m == 2) {
			for (int j = 1; j <= n; j++) {
				if (m == 3) {
					for (int k = j; k <= n; k++) {
						if ((i & j & k) > maxs) {
							maxs = (i &j &k);
						}
					}
				} else {
					if ((i & j) > maxs) {
						maxs = (i &j);
					}
				}

			}
		}
	}
	cout << maxs;
	return 0;
}