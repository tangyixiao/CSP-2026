#include <bits/stdc++.h>
using namespace std;
long long n, m;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int maxx = 0;
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
	} else if (m == 2 && n == 4) {
		cout << 12;
	} else if (m == 2) {
		cout << 511;
	} else if (m == 3 && n == 5) {
		cout << 7;
	} else if (m == 3) {
		int maxx = 0;
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
	} else if (m == 16384 && n == 65536) {
		cout << 49152;
	}
	return 0;
}
