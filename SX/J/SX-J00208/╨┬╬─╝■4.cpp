#include <bits/stdc++.h>
using namespace std;
long long n, m, a[1000005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = n - 1; i > n - 4; i--) {
		cout << a[i] << " ";
	}
	return 0;
}
