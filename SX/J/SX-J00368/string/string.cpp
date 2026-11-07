#include <bits/stdc++.h>
using namespace std;
long long n, x[200005], ans;
char y[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x[i] >> y[i];
	}
	int l = 1, r = n;
	while (l < r) {
		if (y[l] == y[r] && x[l] == x[r]) {
			r--;
			l++;
			continue;
		}
		if (y[l] != y[r]) {
			if (x[l] > x[r]) {
				x[l] -= x[r];
				ans += x[r];
				r--;
			} else {
				x[r] -= x[l];
				ans += x[l];
				l++;
			}
		}
		if (x[r] == 0 && y[l] != y[r]) {
			r--;
		} else if (x[l] == 0 && y[l] != y[r]) {
			l++;
		}

	}
	cout << ans;
	return 0;
}
