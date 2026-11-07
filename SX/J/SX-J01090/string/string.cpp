#include <bits/stdc++.h>
using namespace std;

long long a[200001] = {0};
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string b;
	long long ans = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	int x = 0, y = n - 1;
	while (y - x > 0) {
		if (a[x] > a[y]) {
			if (b[x] != b[y]) {
				ans += a[y];
			}
			a[x] = a[x] - a[y];
			y--;
		} else if (a[x] < a[y]) {
			if (b[x] != b[y]) {
				ans += a[x];
			}
			a[y] = a[y] - a[x];
			x++;
		} else {
			if (b[x] != b[y]) {
				ans += a[y];
			}
			x++;
			y--;
		}
	}
	cout << ans;
	return 0;
}
