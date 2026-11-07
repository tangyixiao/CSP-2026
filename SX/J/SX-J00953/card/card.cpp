#include <bits/stdc++.h>
using namespace std;
int a[5010], b[5010], v[5010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, l, f;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		l = 0;
		for (int j = i; j <= n; j++) {
			f = 0;
			for (int k = 1; k <= l; k++) {
				if (a[j] == b[k]) {
					f = 1;
					l = k;
					b[k] = a[j];
					break;
				}
			}
			if (!f) {
				l++;
				b[l] = a[j];
			}
		}
		for (int j = 1; j <= l; j++)
			v[b[j]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << v[i] << " ";
	return 0;
}