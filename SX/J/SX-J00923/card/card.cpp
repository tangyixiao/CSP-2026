#include <bits/stdc++.h>
using namespace std;
int m, n, c[500005], a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		c[a[i]] = i;
	}
	c[a[n]] = n;
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
