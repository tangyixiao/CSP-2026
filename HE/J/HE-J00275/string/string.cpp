#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 2e5 + 9;
ll n, a[N], ans;
char c[N];

inline ll read();

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	n = read();
	ll l = 1, r = 0;
	for (int i = 1; i <= n; i++) {
		a[i] = read();
		r += a[i];
		c[i] = getchar();
	}
	for (int i = 1, j = n; i < j; ) {
		ll tl = l + a[i] - 1, tr = r - a[j] + 1;
		if (tl - l + 1 >= r - tr + 1) {
			if (c[i] != c[j]) {
				ans += r - tr + 1;
			}
			a[i] -= r - tr + 1;
			l += r - tr + 1, r = tr - 1;
			j--;
		} else {
			if (c[i] != c[j]) {
				ans += tl - l + 1;
			}
			a[j] -= tl - l + 1;
			r -= tl - l + 1, l = tl + 1;
			i++;
		}
	}
	printf("%lld", ans);
	return 0;
}

inline ll read() {
	ll w = 0, f = 1, c = getchar();
	while (!isdigit(c)) {
		if (c == '-') {
			f = -1;
		}
		c = getchar();
	}
	while (isdigit(c)) {
		  w = w * 10 + (c ^ 48);
		  c = getchar();
	}
	return w * f;
}

