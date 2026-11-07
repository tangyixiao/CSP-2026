#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 10e5+5;
int n;
long long ans, len[N];
long long a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &a[i], &c[i]);
		len[i] = a[i] + len[i - 1];
	}
	int l1 = 0, r1 = n;
	for (int l = 1, r = len[n]; r >= l; l++, r--) {
		if (l > len[l1])
			l1++;
		if (r < len[r1 - 1])
			r1--;
		if (c[l1] != c[r1]) {
			ans++;
		}
	}
	printf("%lld", ans);
	return 0;
}
