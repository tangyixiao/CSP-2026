#include <bits/stdc++.h>
using namespace std;
long long n, k, l, a[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	l = a[n];
	for (int i = 1; i <= k; i++)
		l &= a[n - i + 1];
	cout << l;
	return 0;
}
