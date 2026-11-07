#include <bits/stdc++.h>
using namespace std;
long long ans = 0, z, j = 1, t = 0;
int n, a[200005];
char s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		z += a[i];
	}
	z /= 2;
	while (z > 0) {
		if (z - a[j] >= 0) {
			int mj = a[j];
			while (mj > 0) {
				if (mj - a[n - t] >= 0) {
					if (s[j] != s[n - t]) {
						ans += a[n - t];
						mj -= a[n - t];
						t++;

					} else {

						mj -= a[n - t];
						t++;
					}
				} else {
					if (s[j] != s[n - t]) {
						ans += mj;
						a[n - t] -= mj;
						break;
					} else {
						a[n - t] -= mj;
						break;
					}

				}
			}
			z -= a[j];
			j++;
		} else if (z - a[j] < 0) {
			if (z % 2 == 0) {
				int mj = a[j] - (a[j] - z) * 2;
				while (mj  > 0) {
					if (mj - a[n - t] >= 0) {
						if (s[j] != s[n - t]) {
							ans += a[n - t];
							mj -= a[n - t];
							t++;

						} else {

							mj -= a[n - t];
							t++;
						}
					} else {
						if (s[j] != s[n - t]) {
							ans += mj;
							a[n - t] -= mj;
							break;
						} else {
							a[n - t] -= mj;
							break;
						}

					}
				}
				z -= a[j];
				j++;
			} else {
				int mj = a[j] + 1 - (a[j] - z - 1) * 2;
				while (mj  > 0) {
					if (mj - a[n - t] >= 0) {
						if (s[j] != s[n - t]) {
							ans += a[n - t];
							mj -= a[n - t];
							t++;

						} else {

							mj -= a[n - t];
							t++;
						}
					} else {
						if (s[j] != s[n - t]) {
							ans += mj;
							a[n - t] -= mj;
							break;
						} else {
							a[n - t] -= mj;
							break;
						}

					}
				}
				z -= a[j];
				j++;
			}
		}
	}
	cout << ans;
	return 0;
}
