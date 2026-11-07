#include <bits/stdc++.h>
using namespace std;
int a[300005], n;
char c[300005];
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while (1) {
		if (n % 2 == 0) {
			if (l == r || l - 1 == r) {
				break;
			}
		} else {
			if (l == r || l - 1 == r) {
				break;
			}
		}
		if (a[l] == a[r]) {
			if (c[l] != c[r]) {
				ans += a[l];
			}
			l++, r--;
		} else if (a[l] < a[r]) {
			if (c[l] != c[r]) {
				ans += a[l];
			}
			a[r] -= a[l];
			l++;
		} else {
			if (c[l] != c[r]) {
				ans += a[r];
			}
			a[l] -= a[r];
			r--;
		}
	}
	cout << ans << endl;
	return 0;
}