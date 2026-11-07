#include <bits/stdc++.h>
using namespace std;
long long n, a[100005], cnt, temp, k = 1;
char c[100005];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i * 2 <= n; i++) {
		if (a[i] == a[n - k + 1]) {
			if (c[i] != c[n - k + 1])
				cnt += a[i];
		} else {
			if (a[i] > a[n - k + 1]) {
				while (a[i] > 0) {
					if (c[i] == c[n - k + 1] && a[i] > a[n - k + 1]) {
						a[i] -= a[n - k + 1];
						k++;
					}
					if (c[i] == c[n - k + 1] && a[i] <= a[n - k + 1]) {
						a[i] = 0;
						a[n - k + 1] -= a[i];
					}
					if (c[i] != c[n - k + 1] && a[i] > a[n - k + 1]) {
						a[i] -= a[n - k + 1];
						k++;
						cnt += a[n - k + 1];
					}
					if (c[i] != c[n - k + 1] && a[i] <= a[n - k + 1]) {
						a[i] = 0;
						a[n - k + 1] -= a[i];
						cnt += a[i];
					}
				}
			}
			if (a[i] < a[n - k + 1]) {
				while (a[n - k + 1] > 0) {
					if (c[i] == c[n - k + 1] && a[i] < a[n - k + 1]) {
						a[n - k + 1] -= a[i];
						i++;

					}
					if (c[i] == c[n - k + 1] && a[i] >= a[n - k + 1]) {
						a[n - k + 1] = 0;
						a[i] -= a[n - k + 1];
					}
					if (c[i] != c[n - k + 1] && a[i] < a[n - k + 1]) {
						a[n - k + 1] -= a[i];
						i++;
						cnt += a[i];
					}
					if (c[i] != c[n - k + 1] && a[i] >= a[n - k + 1]) {
						a[n - k + 1] = 0;
						a[i] -= a[i];
						cnt += a[n - k + 1];
					}
				}
			}
		}
		k++;
	}
	cout << cnt;
	return 0;
}
