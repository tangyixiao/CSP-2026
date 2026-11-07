#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[25];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[m];

	return 0;
}