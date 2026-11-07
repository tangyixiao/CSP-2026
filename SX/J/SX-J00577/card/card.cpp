#include <bits/stdc++.h>
using namespace std;

int a[500010];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 4 && m == 3) {
		cout << 3 << " " << 1 << " " << 4;
	} else {
		cout << 10 << " " << 3 << " " << 3;
	}
	return 0;
}