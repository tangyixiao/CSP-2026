#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], cnt;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			cout << 1 << " ";
		}
	} else {
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int k = 1; k <= m; k++) {
			cnt = 0;
			for (int i = k; i <= n; i++) {
				cnt += 1;
			}
			cout << cnt << " ";
		}
	}
	return 0;
}