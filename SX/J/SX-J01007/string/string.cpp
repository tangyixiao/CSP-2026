#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a[200005] = {0}, rug = 0;
	long long s = 0;
	cin >> n;
	char c[200005];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		if (i > 0 && c[i] != c[i - 1])
			rug = 1;
		s += a[i];
	}
	if (rug == 0) {
		cout << 0;
		return 0;
	}
	long long l = a[0], r = a[n - 1], daan = 0;
	for (int i = 0, j = n - 1; l + r <= s;) {
		if (c[i] != c[j]) {
			daan += min(a[i], a[j]);
			if (l > s / 2 && a[i] == a[j]) {
				daan -= max(l - s / 2, s / 2 - r);
			} else if (r > s / 2 && a[i] == a[j]) {
				daan -= max(r - s / 2, s / 2 - l);
			}
		} else {

		}
		if (l < r) {
			a[j] -= a[i];
			i++;
			l += a[i];
		} else if (l > r) {
			a[i] -= a[j];
			j--;
			r += a[j];
		} else if (l == r) {
			i++;
			l += a[i];
			j--;
			r += a[j];
		}
	}
	cout << daan;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
