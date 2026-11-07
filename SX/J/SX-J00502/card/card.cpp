#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card", "r", stdin);
	freopen("card", "w", stdout);
	int n, m, q, p = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> q;
	}
	for (int i = 1; i <= m; i++) {
		p += 2;
		p -= i;
		cout << m - 3 + i - 2 + p << " ";
	}
	return 0;
}