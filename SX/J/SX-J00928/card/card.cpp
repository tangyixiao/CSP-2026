#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500010], sum[500010], pd[500010], pdsum = 0;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (long long i = 1; i <= n; i++) {
		memset(pd, 0, sizeof(pd));
		pdsum = 0;
		for (long long j = i; j <= n; j++) {
			long long yw = 0;
			for (long long k = 1; k <= pdsum; k++) {
				if (pd[k] == a[j]) {
					yw = k;
					break;
				}
			}
			if (yw != 0) {
				pdsum = yw - 1;
			}
			pd[++pdsum] = a[j];
		}
		for (long long j = 1; j <= pdsum; j++) {
			sum[pd[j]]++;
		}
	}
	for (long long i = 1; i <= m; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}
