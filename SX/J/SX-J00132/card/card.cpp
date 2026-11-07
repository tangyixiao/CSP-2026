#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long c[500005] = {};
	long long a[500005] = {};
	long long sum[500005] = {};
	int zhang, lei;
	cin >> zhang >> lei;
	for (int i = 1; i <= zhang; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= zhang; i++) {
		long long b[500005] = {};
		for (int k = 1; k <= zhang; k++) {
			a[i] = b[i];
		}
		for (int j = 1; j < i; j++) {
			if (b[i] == b[j]) {
				for (int p = 1; p <= j; p++) {
					b[p] = 0;
				}
				for (int q = j; q <= i; q++) {
					b[q] = b[q - j + 1];
				}
			}
		}
		for (int m = 1; m <= zhang; m++) {
			c[m] = b[m];
		}
		for (int d = 1; d <= lei; d++) {
			if (c[d] == lei) {
				sum[d]++;
			}
		}

	}
	for (int i = 1; i <= lei; i++) {
		cout << sum[i];
	}
	return 0;
}
