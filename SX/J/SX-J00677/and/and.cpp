#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	int c = a[n];
	for (int i = n - 1; i > n - m; i--) {
		c = c &a[i];
	}
	cout << c;
	return 0;
}