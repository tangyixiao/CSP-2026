#include <bits/stdc++.h>
using namespace std;
long long x, n, a[200005], num, l = 0, r = 0, lx = 1, rx, sum;
char c[200005];
string s;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);


	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		num += a[i];
	}
	rx = n;
	for (long long i = 1; i <= num ; i++) {
		if (l > a[lx]) {
			l -= a[lx];
			lx++;
		}
		if (r > a[rx]) {
			r -= a[rx];
			rx--;
		}
		if (c[lx] != c[rx]) {
			sum++;
		}
		//printf("%lld %lld / %lld %lld\n", l, lx, r, rx);
		l++;
		r++;
	}
	printf("%lld", sum / 2);
	return 0;
}
//string
//long long -> 9*10^18
//200000000000000
//9223372036854775807
