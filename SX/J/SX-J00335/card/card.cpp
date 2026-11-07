#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], b[500005], c[500005];
bool f[500005];

int main() {
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int k = 1; k <= n; k++) {
		memset(b, 0, sizeof(b));
		memset(f, 0, sizeof(f));
		for (int i = k; i <= n; i++) {
			if (b[a[i]] == 0) {
				b[a[i]] = i;
			} else {
				for (int j = b[a[i]]; j <= i - 1; j++) {
					b[j] = -1;
				}
				b[a[i]] = i;
			}
		}
		for (int i = k; i <= n; i++) {
			if (f[a[i]] == 1 || b[a[i]] == -1)
				continue;
			else if (b[a[i]] != 0 && f[a[i]] == 0) {
				c[a[i]]++;
				f[a[i]] = 1;
			}

		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}


	return 0;
}
