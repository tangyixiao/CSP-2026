#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int a[N];
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int Max = -1e9;
		for (int i = 1; i <= n; i++) {
			Max = max(Max, a[i]);
		}
		cout << Max;
		return 0;
	}
	if (m == 2) {
		int Max = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				Max = max(Max, (a[i] & a[j]));
			}
		}
		cout << Max;
		return 0;
	}
	if (m == n) {
		int ans = 0;
		for (int i = 2; i <= n; i++) {
			ans = (a[i - 1] & a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == n - 1) {
		int ans = 0;
		for (int i = 2; i <= n; i++) {
			for (int j = i - 1; j <= n; j++) {
				if ((a[i - 1] != a[j]) && (a[i] != a[j])) {
					ans = (a[i - 1] & a[i]);
				}
			}
		}
		cout << ans;
	}
	return 0;
}
