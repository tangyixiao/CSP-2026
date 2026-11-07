#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
long long n, a[N], h, k, l, r, ans;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	l = 1, r = n;
	h = a[1], k = a[n];
	while (l < r) {
		if (c[l] != c[r]) {
			if (h > k) {
				ans = ans + k;
				h = h - k;
				r--;
				k = a[r];
			} else {
				ans = ans + h;
				k = k - h;
				l++;
				h = a[l];
			}
		} else {
			if (h > k) {
				h = h - k;
				r--;
				k = a[r];
			} else {
				k = k - h;
				l++;
				h = a[l];
			}
		}
	}
	cout << ans;
	return 0;
}
