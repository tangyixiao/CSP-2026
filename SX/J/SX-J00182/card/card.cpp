#include <bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005], p[500005];


int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int last = n;
	while (last != 0) {
		int newlast = last;
		for (int i = 1; i <= n; i++) {
			if (a[i] != 0) {
				p[i] = a[i];
				for (int j = 1; j < i; j++) {
					if (p[j] == a[i]) {
						p[j] = 0;
						last--;
					}

				}
			}
		}
		if (newlast == last) {
			p[n - last] = 0;
			last--;
		}

		for (int i = 1; i <= n; i++) {
			a[i] = p[i];
			if (p[i] != 0)
				b[p[i]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << " ";
	return 0;
}
