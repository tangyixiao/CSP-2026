#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500003], b[300003], c[300003];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (b[k] == a[j]) {
					for (int l = k + 1; l < n; l++) {
						b[l] = 0;
						if (b[l + 1] == 0) {
							break;
						}
					}
				}
				if (b[k] == 0)
					b[k] = a[j];
			}
		}
		for (int j = 0; j < n; j++) {
			if (b[j]) {
				c[j]++;
				b[j] = 0;
			} else {
				break;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}