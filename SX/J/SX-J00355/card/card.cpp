#include <bits/stdc++.h>
using namespace std;
int a[500005];
int f[300005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (f[a[i]] >= 0) {
			
		}
		q.push(a[i]);
		f[a[i]]++;
	}
	return 0;
}
