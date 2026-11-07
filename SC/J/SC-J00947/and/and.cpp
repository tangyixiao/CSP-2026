#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[200005];
int b[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int res = 0;
	for (int i = 1 << 29, l = 0; i != 0; i >>= 1, l = 0) {
		for (int j = 1, r = n; j <= n; j++) {
			if (a[j] & i)
				b[++l] = a[j];
			else
				b[r--] = a[j];
		}
		if (l >= m)
			memcpy(a + 1, b + 1, sizeof(int) * l), n = l, res |= i;
	}
	cout << res << '\n';
	return 0;
}
