#include <bits/stdc++.h>
using namespace std;
long long n, a[200005];
long long cnt;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while (l < r) {
		if (a[l] < a[r]) {
			if (c[l] != c[r]) {
				cnt += a[l];
			}
			a[r] -= a[l];
			l++;
		}
		if (a[l] > a[r]) {
			if (c[l] != c[r]) {
				cnt += a[r];
			}
			a[l] -= a[r];
			r--;
		}
		if (a[l] == a[r]) {
			if (c[l] != c[r]) {
				cnt += a[r];
			}
			l++;
			r--;
		}
	}
	cout << cnt;
	return 0;
}
