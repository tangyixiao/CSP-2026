#include <bits/stdc++.h>
using namespace std;
long long n, m;
const int N = 5e5+10;
int a[N], b[N], c[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(c, 0, sizeof(c));
		for (int j = i; j <= n; j++) {
			c[j] = a[j];
			for (int k = i; k <= j - 1; k++) {
				if (c[k] == c[j]) {
					for (int g = k; g <= j - 1; g++) {
						c[g] = 0;
					}
					break;
				}
			}
		}
		for (int j = 1; j <= n; j++) {
			b[c[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
