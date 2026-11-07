#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10, M = 3e5+10;
int n, m;
int a[N];
int b[N];
int ans[N];
bool ok = 0;
int c[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n; i >= 1; i--) {
		b[a[i]]++;
		c[i] = b[a[i]];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (ok == 0) {
				ans[a[j]]++;
				if (c[i] != 1) {
					ok = 1;
				}
			}
		}
		ok = 0;
	}
	ans[a[n]] = n;
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
