#include <bits/stdc++.h>
using namespace std;
long long a[1000005], b[1000005], sum[31], po[31];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	po[0] = 1;
	for (int i = 1; i <= 31; i++)
		po[i] = po[i - 1] * 2;
	int n, m, anss = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (1) {
		for (int i = 0; i <= 1000005; i++)
			b[i] = 0;
		for (int i = 0; i <= 31; i++)
			sum[i] = 0;
		sort (a + 1, a + n + 1);
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= 30; j++) {
				if (a[i] >= po[j])
					sum[j]++;
			}
		}
		int ans = 0, x = -1;
		for (int i = 30; i >= 0; i--) {
			if (sum[i] >= m) {
				for (int j = 1; j <= n; j++) {
					if (a[j] >= po[i]) {
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
		anss += po[x];
		n = ans;
		for (int i = 1; i <= n; i++) {
			a[i] = b[i] - po[x];
		}
	}


	return 0;
}
