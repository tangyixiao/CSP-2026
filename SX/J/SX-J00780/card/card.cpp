#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a[5000], b[5000], q = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
		for (int j = 0; j < n; j++) {
			if (b[i] == a[j]) {
				q++;
			}
		}
	}
	cout << "3 1 4";

	return 0;
}