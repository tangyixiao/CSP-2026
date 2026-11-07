#include <bits/stdc++.h>
using namespace std;
long long a[10000005], n, ans = 0;
char b[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	char c[n][n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 1; j <= a[i]; j++) {
			c[i][j] = b[i];
		}

	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			if (c[i][j] != c[i][a[i] - j]) {
				ans++;
			}
		}
	}

	cout << ans - 1 ;
}