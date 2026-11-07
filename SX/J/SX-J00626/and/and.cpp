#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	long long a[200000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int t = 1, s = a[n - 1], z = s;
	for (int z = n - 2; t < m; z--) {
		t += 1;
		s = s &= a[z];
	}
	cout << s;
	return 0;
}
