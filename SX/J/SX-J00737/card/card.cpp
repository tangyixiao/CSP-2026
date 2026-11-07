#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], q;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> q;
		a[q] += i;
	}
	for (long long i = 1; i <= m; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
