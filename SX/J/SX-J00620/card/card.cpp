#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int b[m];
	if ()
		b[n - 1] = n;
	if (m == n) {
		if (a[0] == 1) {

			for (int i = 0; i < n; i++) {
				b[i] = i + 1;
			}
		} else {
			for (int i = n - 1; i >= 0; i--) {
				if (a[i] == 2)
					b[1] == 1;
				else
					b[0] == 2;
			}
		}
	}

	for (inti = 0; i < n; i++) {
		cout << b[i];
	}
	return 0;
}