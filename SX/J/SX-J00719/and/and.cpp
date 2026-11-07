#include <bits/stdc++.h>
using namespace std;
int a[200005], s[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	if (m == 1) {
		int maxx = -1;
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
		return 0;
	}
	if (m == 2) {
		int maxx = -1;
		for (int i = 1; i < n; i++) {
			for (int j = 2; j <= n; j++) {
				maxx = max((a[i] & a[j]), maxx);
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == n) {
		int sum = a[1];
		for (int i = 2; i <= n; i++) {
			sum &= a[i];
		}
		cout << sum;
		return 0;
	}
	if (m == n - 1) {
		int maxx = -1;
		for (int i = 2; i <= n; i++) {
			s[i] = (s[i - 1] & a[i]);
		}
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, (s[n] & s[i]));
		}
		cout << maxx;
		return 0;
	}
	return 0;
}
