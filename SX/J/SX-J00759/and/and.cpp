#include <bits/stdc++.h>
using namespace std;
long long a[10000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	a[n - m + 1] &= 0;
	cout << a[n - m + 1];
	return 0;
}
