#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
long long n, m, a[N], tong[N], b[N], e, numm[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(tong, 0, sizeof(tong));
		memset(b, 0, sizeof(b));
		e = i;
		for (int j = i; j <= n; j++) {
			tong[a[j]]++;
			if (tong[a[j]] > 1) {
				tong[a[j]]--;
				while (b[e] != a[j]) {
					tong[b[e]]--;
					e--;
				}
			} else {
				b[j] = a[j];
				e++;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (tong[j] == 1) {
				numm[j]++;
			}
		}
	}
	for (int j = 1; j <= m; j++) {

		cout << numm[j] << ' ';

	}
	return 0;
}