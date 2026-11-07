#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+10;
int n, m, a[N], ans;
string b[N];
string anss;

void ejz(int w, int u) {
	while (w != 0) {
		if (w % 2 == 1) {
			b[u] += '1';
			w = w / 2;
		} else {
			b[u] += '0';
			w = w / 2;
		}
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ejz(a[i], i);
	}
	sort(a + 1, a + 1 + n);
	cout << a[n];
	return 0;

}
