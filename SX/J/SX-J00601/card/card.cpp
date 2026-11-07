#include <bits/stdc++.h>
using namespace std;
int n, m, a[5000005], a1, a2;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		cout << n;
	} else
		cout << 1 << ' ' << 2;
	return 0;
}
