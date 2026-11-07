#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], c[500005],  f, cnt;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	while (cnt != n) {
		cnt++;
		for (int i = n; i > cnt; i--) {
			for (int j = cnt; j < i; j++) {
				if (a[j] == a[i]) {
					f = 1;
					for (int z = i; z <= n; z++) {
						c[a[z]]++;
					}
					break;
				}
			}
		}
		if (f != 1) {
			for (int i1 = cnt; i1 <= n ; i1++) {
				c[a[i1]]++;
			}
		}
		f = 0;
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}