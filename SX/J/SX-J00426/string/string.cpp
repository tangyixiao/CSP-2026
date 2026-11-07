#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], maxx = -1, t[200005], cnt, maxx1 = -1;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		maxx = max(maxx, a[i]);
		t[c[i]]++;
	}
	for (int i = 1; i <= n; i++) {
		if (t[i] > 0) {
			cnt++;
			maxx1 = max(maxx1, t[i]);
		}
	}
	if (cnt == 2) {
		cout << maxx*maxx1;
	} else if (cnt == 1) {
		cout << 0;
	} else {
		cout << maxx;
	}
	return 0;
}