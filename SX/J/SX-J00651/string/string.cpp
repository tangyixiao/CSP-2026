#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, ans;
long long l, r;
long long sum[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
		scanf("%lld %c", &sum[i], &c[i]);
	l = 1, r = n;
	while (l <= r) {
		int mn = min(sum[l], sum[r]);
		if (l == r)
			sum[l] -= mn;
		else
			sum[l] -= mn, sum[r] -= mn;
		if (c[l] != c[r])
			ans += mn;
		if (!sum[l])
			l++;
		if (!sum[r])
			r--;
	}
	printf("%lld\n", ans);
	return 0;
}