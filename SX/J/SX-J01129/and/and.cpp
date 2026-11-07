#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
long long b[1000005];
long long sum[31];
long long pow2[31];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	pow2[0] = 1;
	for (int i = 1; i <= 31; i++) {
		pow2[i] = pow2[i - 1] * 2;
	}

	int n, m, anss = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	while (1) {
		for (int i = 0; i <= 1000005; i++) {
			b[i] = 0;
		}
		for (int i = 0; i <= 31; i++) {
			sum[i] = 0;
		}


		sort(a + 1, a + 1 + n);
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= 30; j++) {
				if (a[i] >= pow2[j]) {
					sum[j]++;
				}
			}
		}
		int ans = 0, x = -1;
		for (int i = 30; i >= 0; i--) {
			if (sum[i] >= m) {
				for (int j = 1; j <= n; j++) {
					if (a[j] >= pow2[i]) {
						ans++;
						b[ans] = a[j];
					}
				}
				x = i;
				break;
			}
		}
		if (x == -1) {
			cout << anss;
			return 0;
		}
		anss += pow2[x];

		n = ans;
		for (int i = 1; i <= n; i++) {
			a[i] = b[i] - pow2[x];
		}

	}
	return 0;
}
