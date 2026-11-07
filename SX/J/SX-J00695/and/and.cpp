#include <bits/stdc++.h>
using namespace std;
long long dd[9999999999], mx = -1;
int n, m, sh[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> sh[i];
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				dd[i] = sh[i] & sh[j];
			}
		}
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				for (int z = i; z <= n; z++) {
					dd[i] = sh[i] & sh[j];
				}
			}
		}
	}
	if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				for (int z = 1; z <= n; z++) {
					for (int s = 1; s <= n; s++) {
						dd[i] = sh[i] & sh[j];
					}
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		mx = max(mx, dd[i]);
	}
	cout << mx;
	return 0;
}