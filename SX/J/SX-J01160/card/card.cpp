#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], ans[500005];
int b[500005] ;
int c[500005] ;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {

		for (int j = i; j <= n; j++) {
			if (b[a[j]] == 0) {
				b[a[j]]++;
				c[a[j]] = j;
			} else {
				for (int y = c[a[j]]; y <= j; y++) {
					b[y] = 0;
				}
			}
		}
		for (int j = 1; j <= m; j++) {
			if (a[j] == 1)
				ans[j]++;
		}

	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';

}
