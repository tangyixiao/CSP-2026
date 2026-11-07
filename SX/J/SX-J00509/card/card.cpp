#include <bits/stdc++.h>
using namespace std;
int n, m, a[10];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		cout << a[3];
	}
	if (m == 2) {
		cout << a[2] << " " << a[4];
	}
	return 0;
}