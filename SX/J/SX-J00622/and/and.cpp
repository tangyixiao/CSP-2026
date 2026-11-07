#include <bits/stdc++.h>
using namespace std;
long long a[10010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	scanf("%lld%lld", &n, &m);
	long long ret = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		ret = a[i];
	}
	printf("%lld", ret);
	return 0;
}
