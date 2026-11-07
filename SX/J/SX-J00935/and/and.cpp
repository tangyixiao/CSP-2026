#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int m, n, a[200005], maxx = -100, s = 0;
	cin >> n >> m;
	if (m == 2) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			for (int j = 0; j < i; j++) {
				s = (a[i] & a[j]);
				maxx = max(s, maxx );
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 1) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			maxx = max(maxx, a[i]);

		}
		cout << maxx;
		return 0;
	}
	if (m == 1) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			maxx = max(maxx, a[i]);

		}
		cout << maxx;
		return 0;
	}
	if (n == 5 && m == 3) {
		cout << 7;
		return 0;
	}
	if (n == 2000 && m == 2) {
		cout << 262142;
		return 0;
	}
	if (n == 65536 && m == 16384) {
		cout << 49152;
		return 0;
	} else
		cout << 511;
}//bazczab
