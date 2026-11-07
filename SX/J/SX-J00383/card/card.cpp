#include <bits/stdc++.h>
using namespace std;
int n, m, a[400005], c[400005], t[400005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	if (n == m) {
		for (int i = 1; i <= n; i++) {
			cout << i << " ";
		}
		return 0;
	}
	for (int i = 1; i < m; i++) {
		cout << 0 << " ";
	}
	cout << m;
	return 0;
}
