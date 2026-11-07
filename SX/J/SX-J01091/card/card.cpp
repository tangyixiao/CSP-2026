#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5+5;
const int M = 3 * 1e5+5;
long long n, m, a[N], b[N], k, cnt[M];
bool f = 1;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0 + i; j < n; j++) {
			for (k = 0; k < j; k++) {
				if (a[k] == a[j]) {
					f = 0;
				}
			}
			if (f) {
				b[j] = a[j];
			} else {
				b[k] = a[j];
				for (int c = k + 1; c <= n; c++) {
					a[c] = 0;
				}
			}
		}
		for (int j = 0; j < n; i++) {
			cnt[b[i]]++;
		}
		for (int j = 1; j <= m; j++) {
			cout << cnt[j] << " ";
		}
	}
	fclose(stdout);
	fclose(stdin);
	return 0;
}
