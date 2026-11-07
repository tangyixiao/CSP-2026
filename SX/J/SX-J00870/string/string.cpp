#include <bits/stdc++.h>
using namespace std;
long long n, k, mj, s, h;
long long u[200010][3];
bool f;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		char t;
		scanf("%lld %c", &u[i][1], &t);
		s += u[i][1];
		u[i][2] = t - 'a';
	}
	h = ceil(s / 2);
	mj = n;
	for (int i = 1; i <= n; i++) {
		long long a = u[i][1];
		int b = u[i][2];
		while (a != 0 && f == 0) {
			if (u[mj][2] == b) {
				if (u[mj][1] <= a) {
					if (s - u[mj][1] < h) {
						long long t = h - s;
						a -= t;
						s -= t;
						u[mj][1] = 0;
						f = 1;
						break;
					}
					a -= u[mj][1];
					s -= u[mj][1];
					u[mj][1] = 0;
					mj--;
				} else if (u[mj][1] > a) {
					if (s - a < h) {
						long long t = h - s;
						u[mj][1] -= t;
						s -= t;
						a = 0;
						f = 1;
						break;
					}
					u[mj][1] -= a;
					s -= a;
					a = 0;
				}
			} else {
				if (u[mj][1] <= a) {
					if (s - u[mj][1] < h) {
						long long t = h - s;
						a -= t;
						s -= t;
						k += t;
						u[mj][1] = 0;
						f = 1;
						break;
					}
					a -= u[mj][1];
					k += u[mj][1];
					s -= u[mj][1];
					u[mj][1] = 0;
					mj--;
				} else if (u[mj][1] > a) {
					if (s - a < h) {
						long long t = h - s;
						u[mj][1] -= t;
						s -= t;
						k += t;
						a = 0;
						f = 1;
						break;
					}
					u[mj][1] -= a;
					k += a;
					s -= a;
					a = 0;
				}
			}
		}
	}
	printf("%lld", k);
	return 0;
}
