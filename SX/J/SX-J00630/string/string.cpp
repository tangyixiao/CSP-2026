#include <bits/stdc++.h>
using namespace std;
int n, w[200005];
long long g;
string s, ss;
char a[200005];
long long zo, zob;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
		cin >> a[i];
		if (a[i] == a[i - 1]) {
			i--;
			n--;
			w[i - 1] += w[i];
		}
	}
	for (int i = 1; i <= n / 2; i++) {
		n -= zo;

		if (a[i] == a[n - i + 1]) {
			if (w[i] > w[n - i + 1]) {
				for (int j = 1; j <= n; j++) {
					if (w[i] - w[n - i + 1] - w[n - i + 1 - j] >= 0) {
						if (int(a[n - i + 1 - j]) != int(a[n - i + 1])) {
							g += w[n - i + 1 - j];
						}
						w[n - i + 1] += w[n - i + 1 - j];
						w[n - i + 1 - j] = 0;
						zo++;


					} else {

						if (a[n - i + 1 - j] != a[i]) {
							w[n - i + 1 - j] -= (w[i] - w[n - i + 1]);
							g += abs(w[i] - w[n - i + 1]);
							w[n - i + 1] += (w[i] - w[n - i + 1]);
							break;
						} else {
							w[n - i + 1 - j] -= (w[i] - w[n - i + 1]);
							w[n - i + 1] += (w[i] - w[n - i + 1]);
							break;
						}
					}
				}
			} else {
				for (int j = 1; j <= n; j++) {
					if (w[n - i + 1] - w[i] - w[i + j] >= 0) {
						if (int(a[i + j]) != int(a[n - i + 1])) {
							g += w[i + j];
						}
						w[i] += w[i + j];
						w[i + j] = 0;
						zo++;
					} else {
						if (a[i + j] != a[i]) {
							w[i + j] -= (w[n - i + 1] - w[i]);
							g += abs(w[i] - w[n - i + 1]);
							w[i] += abs(w[i] - w[n - i + 1]);
							break;
						} else {
							w[i + j] -= abs(w[i] - w[n - i + 1]);
							w[i] += abs(w[i] - w[n - i + 1]);
							break;
						}
					}
				}
			}
		} else {
			if (w[i] > w[n - i + 1]) {
				for (int j = 0; j <= n; j++) {
					if (w[i] - w[n - i + 1 - j] > 0) {
						if (a[i] != a[n - i + 1 - j]) {
							g += w[n - i + 1 - j];
						}
						w[i] -= w[n - i + 1 - j];
						w[n - i + 1 - j] = 0;
						zo++;

					} else {
						if (a[n - i + 1 - j] != a[i]) {
							w[n - i + 1 - j] -= w[i];
						}
						g += w[i];
						break;
					}
				}
			} else {
				for (int j = 0; j <= n; j++) {
					if (w[n - i + 1 ] - w[i + j] > 0) {
						if (a[i] != a[n - i + 1 - j]) {
							g += w[i + j];
						}
						w[n - i + 1] -= w[i + j];
						w[i + j] = 0;


					} else {
						if (a[i + j] != a[i]) {
							w[i + j] -= w[n - i + 1];
						}
						g += w[n - i + 1];
						break;
					}
				}
			}
		}
	}
	cout << g;
	return 0;
}
