#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long b = n - 1;
	long long s = a[n];
	for (int i = 1; i < m; i++);
	{
		s &= a[b];
		b--;
	}
	cout << s;
	return 0;
}