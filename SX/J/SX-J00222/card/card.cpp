#include <bits/stdc++.h>
using namespace std;
int n, m, bj;
int a[500005], ans[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int h = n;
		while (h != (i - 1)) {
			for (int j = i; j <= h; j++) {
				if (a[j] == a[h]) {

					ans[a[h]]++;
					h = j - 1;
					j = i - 1;
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
