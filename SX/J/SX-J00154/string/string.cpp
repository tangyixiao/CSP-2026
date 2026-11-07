#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int n, a[N], g;
char c[N];
string s;

int gcd(int x, int y) {
	if (x == 1 || y == 1)
		return 1;
	if (y > x)
		swap(x, y);
	if (y == 0 || x == y)
		return x;
	else
		return gcd(y, x % y);
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &a[i], &c[i]);
		if (i == 1)
			g = a[1];
		else if (g != 1)
			g = gcd(g, a[i]);
	}
	int l = 0;
	for (int i = 1; i <= n; i++) {
		a[i] /= g;
		l += a[i];
		for (int j = 1; j <= a[i]; j++)
			s += c[i];
	}
	int cnt = 0, lft = 0, rght = l - 1;
	while (lft <= rght) {
		if (s[lft] != s[rght])
			cnt += g;
		lft++, rght--;
	}
	printf("%lld", cnt);
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
