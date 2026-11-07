#include <bits/stdc++.h>
using namespace std;

int a[500005], b[300005] = {0};

int main() {
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	int m, n, t;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		a[i] = t;
		if (b[t] != 0) {
			for (int j = i - 1; j >= 0; j--) {
				if (a[j] != t) {
					a[j] = 0;
				} else {
					a[j] = 0;
					break;
				}
			}
		}
		for (int j = 1; j < i; j++) {
			if (a[j] != 0) {
				b[a[j]]++;
			}
		}
	}
	for (int j = 1; j <= m; j++) {
		cout << b[j] << " ";
	}
	return 0;
}