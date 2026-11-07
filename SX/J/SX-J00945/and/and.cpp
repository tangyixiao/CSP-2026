#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a[200010];
	int q, w;
	cin >> q >> w;
	for (int i = 1; i <= q; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + q + 1, greater<int>());
	cout << a[w];
	return 0;
}
