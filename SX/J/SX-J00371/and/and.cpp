#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 10e5+2;
int m, n;
unsigned long long a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + n + 1);
	printf("%lld", a[n - m + 1]);

	return 0;
}
