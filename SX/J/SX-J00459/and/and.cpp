#include <bits/stdc++.h>
using namespace std;
int n, m, q[200005], mmax = -2147483648, ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> q[i];
	}
	if (n == m) {
		for (int i = 2; i <= n; i++) {
			ans += q[i - 1] & q[i];
		}
		cout << ans;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				mmax = max(mmax, q[i] & q[j]);
			}
		}
	} else if (m == 1) {
		for (int i = 1; i <= n; i++) {
			mmax = max(mmax, q[i]);
		}
	} else if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= n; k++) {
					mmax = max(mmax, q[i] & q[j] & q[k]);
				}
			}
		}
	}
	cout << mmax;
	fclose(stdin);
	fclose(stdout);
	return 0;
}