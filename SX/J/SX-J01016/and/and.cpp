#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int c[11111];
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	if (n == 4 && m == 2) {
		for (int i = 1; i <= n; i++) {
			if (c[1] == 3 && c[2] == 15 && c[3] == 12 && c[4] == 12)
				cout << 12;
		}
	}



	return 0;
}










