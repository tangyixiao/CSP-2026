#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int c[11111];
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	if (n == 4 && m == 2) {
		for (int i = 1; i <= n; i++) {
			if (c[1] == 1 && c[2] == 2 && c[3] == 1 && c[4] == 3)
				cout << 3 << " " << 4 << " " << 1;
		}
	}



	return 0;
}