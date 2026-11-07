#include <bits/stdc++.h>
using namespace std;
int a[100010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	if (m == 1) {
		int ma = INT_MIN;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			if (a[i] > ma) {
				ma = a[i];
			}
		}
		cout << ma;
		return 0;
	} else if (m == n) {
		int s;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		s = a[1];
		for (int i = 2; i <= n; i++) {
			s = s &a[i];
		}
		cout << s;
		return 0;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int ma = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ma = max(ma, a[i] & a[j]);
			}
		}
		cout << ma;
		return 0;
	} else {

		for (int i = 1; i <= n; i++) {
			cin >> a[i];

		}
		sort(a + 1, a + 1 + n);
		cout << a[n - m + 1];
		return 0;
	}
	return 0;
}