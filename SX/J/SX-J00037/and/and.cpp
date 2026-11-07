#include <bits/stdc++.h>
using namespace std;
long long n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld %lld", &n, &m);
	long long a[n + 10] = {}, cnt = 0;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n, greater<int>());
	cnt = a[1];
	for (int i = 2; i <= m; i++) {
		cnt &= a[i];
	}
	printf("%lld", cnt);
	return 0;
}