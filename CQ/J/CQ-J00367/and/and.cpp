#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5;
const int LOG = 30;
int n, m;
int a[MAXN], b[MAXN];
bool fg;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int k = LOG; k >= 0; k--) {
		if (!fg) {
			int idx = 0;
			for (int i = 1; i <= n; i++) {
				if (a[i] & (1 << k)) b[++idx] = a[i];
			}
			if (idx > m) {
				fg = true;
				n = idx;
			} else if (idx < m) {
				// Nothing
			} else {
				fg = true;
				n = idx;
				break;
			}
		} else {
			int idx = 0;
			for (int i = 1; i <= n; i++) {
				if (b[i] & (1 << k)) a[++idx] = b[i];
			}
			if (idx > m) {
				fg = false;
				n = idx;
			} else if (idx < m) {
				// Nothing
			} else {
				fg = false;
				n = idx;
				break;
			}
		}
	}
	int ans = (fg ? b[1] : a[1]);
	for (int i = 2; i <= n; i++) {
		ans &= (fg ? b[i] : a[i]);
	}
	cout << ans << '\n';
	return 0;
}
