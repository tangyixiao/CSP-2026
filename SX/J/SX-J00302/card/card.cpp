#include <bits/stdc++.h>
using namespace std;
int a[500005], b[100005], c[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	int f = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int d = 1; d < j; d++) {
				f = 0;
				if (b[d] == a[j])
					f = 1;
			}
			if (f == 0)
				b[j] = a[j];
			else {
				b[j] = a[j];
				for (int o = 1; o < j; o++)
					b[o] = 0;
			}
		}
		for (int y = 1; y <= m; y++) {
			for (int x = i; x <= n; x++) {
				if (b[x] == y)
					c[y]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
