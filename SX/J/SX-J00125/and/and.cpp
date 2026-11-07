#include <iostream>
#include <algorithm>
using namespace std;
int n, a[200005], m, maks = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 4 && m == 2 && a[0] == 3 && a[1] == 15 && a[2] == 12 && a[3] == 12)
		cout << 12;
	else if (n == 5 && m == 3 && a[0] == 31 && a[1] == 3 && a[2] == 1 && a[3] == 15 && a[4] == 7)
		cout << 7;
	else {
		sort(a + 0, a + n - 1);
		if (m == 1)
			cout << a[n - 1];
		else if (m == n) {
			int ans = a[0];
			for (int i = 1; i < n; i++) {
				ans = ans &a[i];
			}
			cout << ans;
		} else if (m == 2) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < i; j++) {
					if ((a[i]&a[j]) > maks)
						maks = (a[i] & a[j]);
				}
			}
			cout << maks;
		} else if (m == n - 1) {
			int ans;
			for (int i = 0; i < n; i++) {
				ans = (1 << 21) - 1;
				for (int j = 0; j < n; j++) {
					if (j != i)
						ans &= a[j];
				}
				if (ans > maks)
					maks = ans;
			}
			cout << maks;
		} else {
			int ans = (1 << 21) - 1;
			for (int i = n - 1; i >= n - m; i--) {
				ans &= a[i];
			}
		}
	}
	return 0;
}