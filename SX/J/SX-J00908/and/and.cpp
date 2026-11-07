#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
//	int maxx = -9999;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			maxx = max(a[i] & a[j], maxx);
//		}
//	}
//	cout << maxx;
	sort(a, a + n);
	cout << a[ n - m ];

	return 0;
}