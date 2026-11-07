#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[N];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	cout << a[n - m + 1];
	return 0;
}
