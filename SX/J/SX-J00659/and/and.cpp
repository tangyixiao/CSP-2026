#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	long long a[100005] = {};
	for (long long i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[n - 1];
	return 0;
}