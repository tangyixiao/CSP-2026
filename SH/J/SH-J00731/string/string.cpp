#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, a[N];
long long ans;
char c[N];

int main () {

	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);

	ios::sync_with_stdio (0);
	cin.tie (0);
	cout.tie (0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}

	for (int x = 1, y = n; x <= y; ) {
		if (a[x] == a[y]) {
			if (c[x] != c[y]) {
				ans += a[x];
			}
			x++;
			y--;
		} else if (a[x] < a[y]) {
			if (c[x] != c[y]) {
				ans += a[x];
			}
			a[y] -= a[x];
			x++;
		} else if (a[x] > a[y]) {
			if (c[x] != c[y]) {
				ans += a[y];
			}
			a[x] -= a[y];
			y--;
		}
	}

	cout << ans;

	return 0;
}
