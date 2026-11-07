#include <bits/stdc++.h>
using namespace std;
string k, q;

int main() {
//("card.in","r",stdin);
//("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	11 z = 1;
	for (int i = 1; i <= m; i++) {
		memset(q, 0, sizeof(q));
		for (int j = z, l = 1; j <= n; j++, l++) {
			if (vis[j]) {
				for (int k = vis[j]; k <= j; k++) {
					vis[p[k]] = 0;
					q[k] = 0;
					1--;
				}
			}
			q[j] = a[j];
			vis[j] = j
		}
		z++;
	}
	for (int i = 1; i < +m; i++) {
		cout << ans[i] << " ";
	}
}
